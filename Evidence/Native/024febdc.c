/* IL2CPP: Dino.BusSand.View.VehicleView$$SetLidOpen
void Dino_BusSand_View_VehicleView__SetLidOpen (Dino_BusSand_View_VehicleView_o* __this, bool open, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView$$SetLidOpen
   void Dino_BusSand_View_VehicleView__SetLidOpen (Dino_BusSand_View_VehicleView_o* __this, bool
   open, const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__SetLidOpen_23febdc(long param_1,uint param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((*(char *)(param_1 + 0x298) == '\0') && ((param_2 & 1) != 0)) {
    if (*(float *)(param_1 + 0x148) <= -1.0) {
      return;
    }
    uVar2 = 0xc2b80000;
    uVar1 = 0;
    if (*(int *)(param_1 + 0x24) != 1) {
      uVar2 = 0xc2dc0000;
    }
    *(undefined4 *)(param_1 + 0x144) = 0xc3820000;
    *(undefined4 *)(param_1 + 0x14c) = 0xbf800000;
    uVar3 = 0xc2900000;
    if (*(int *)(param_1 + 0x24) != 2) {
      uVar3 = uVar2;
    }
    *(undefined4 *)(param_1 + 0x148) = uVar3;
  }
  else {
    if (-1.0 <= *(float *)(param_1 + 0x148)) {
      return;
    }
    if (0.0 <= *(float *)(param_1 + 0x14c)) {
      return;
    }
    uVar1 = 1;
    *(undefined4 *)(param_1 + 0x148) = 0;
  }
  *(undefined1 *)(param_1 + 0x150) = uVar1;
  return;
}

