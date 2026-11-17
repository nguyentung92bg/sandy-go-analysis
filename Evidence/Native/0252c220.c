/* IL2CPP: Dino.BusSand.Core.BusGeometry$$Overlaps
bool Dino_BusSand_Core_BusGeometry__Overlaps (Dino_BusSand_Core_BusObb_o* a, Dino_BusSand_Core_BusObb_o* b, double eps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.BusGeometry$$Overlaps
   bool Dino_BusSand_Core_BusGeometry__Overlaps (Dino_BusSand_Core_BusObb_o* a,
   Dino_BusSand_Core_BusObb_o* b, double eps, const MethodInfo* method); */

uint Dino_BusSand_Core_BusGeometry__Overlaps_242c220(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  
  puVar1 = PTR_DAT_04cbc080;
  if ((bRam0000000004f9cbce & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    bRam0000000004f9cbce = 1;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_Core_BusGeometry__Separated_242c124(uVar4,uVar5,param_1,param_2,param_3);
  if ((uVar3 & 1) == 0) {
    dVar6 = *(double *)(param_2 + 0x10);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = Dino_BusSand_Core_BusGeometry__Separated_242c124(uVar4,-dVar6,param_1,param_2,param_3);
    if ((uVar3 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_3 + 0x10);
      uVar5 = *(undefined8 *)(param_3 + 0x18);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = Dino_BusSand_Core_BusGeometry__Separated_242c124(uVar4,uVar5,param_1,param_2,param_3);
      if ((uVar3 & 1) == 0) {
        dVar6 = *(double *)(param_3 + 0x10);
        uVar4 = *(undefined8 *)(param_3 + 0x18);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar2 = Dino_BusSand_Core_BusGeometry__Separated_242c124
                          (uVar4,-dVar6,param_1,param_2,param_3);
        uVar2 = uVar2 ^ 1;
        goto LAB_0252c2fc;
      }
    }
  }
  uVar2 = 0;
LAB_0252c2fc:
  return uVar2 & 1;
}

