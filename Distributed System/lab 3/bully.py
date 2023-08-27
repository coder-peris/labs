class Bully:
    def __init__(self, n):
        self.n = n
        self.pro = [0] * n  # List to store priorities of processes
        self.sta = [0] * n  # List to store status of processes
        self.co = None

    def main(self):
        print("Enter the number of processes:")
        n = self.n

        for i in range(n):
            print("For process", i + 1, ":")
            sta = int(input("Status (1 for active, 0 for inactive): "))
            pro = int(input("Priority: "))
            self.sta[i] = sta
            self.pro[i] = pro

        ele = int(input("Which process will initiate the election?"))
        self.elect(ele)

        if self.co is not None:
            print("Final coordinator is", self.co)
        else:
            print("No coordinator was elected.")

    def elect(self, ele):
        ele = ele - 1
        self.co = ele + 1
        for i in range(self.n):
            if self.pro[ele] < self.pro[i]:
                print("Election message is sent from", ele + 1, "to", i + 1)
                if self.sta[i] == 1:
                    self.elect(i + 1)


if __name__ == "__main__":
    n = int(input("Enter the number of processes: "))
    bully = Bully(n)
    bully.main()
