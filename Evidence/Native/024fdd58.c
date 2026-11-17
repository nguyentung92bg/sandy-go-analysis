/* IL2CPP: Dino.BusSand.View.VehicleView$$Flash
void Dino_BusSand_View_VehicleView__Flash (Dino_BusSand_View_VehicleView_o* __this, float amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView$$Flash
   void Dino_BusSand_View_VehicleView__Flash (Dino_BusSand_View_VehicleView_o* __this, float amount,
   const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__Flash_23fdd58(undefined4 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  puVar1 = PTR_DAT_04cbc460;
  if ((bRam0000000004f9caf3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc460);
    bRam0000000004f9caf3 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(lVar2 + 0xb8);
  uVar5 = *(undefined4 *)(lVar2 + 0xb8);
  uVar6 = *(undefined4 *)(lVar2 + 0xbc);
  uVar7 = *(undefined4 *)(lVar2 + 0xc0);
  uVar8 = *(undefined4 *)(lVar2 + 0xc4);
  if ((bRam0000000004f9caf4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9caf4 = 1;
  }
  if ((*(char *)(param_2 + 0xe1) != '\0') && (*(long *)(param_2 + 0x120) != 0)) {
    uVar4 = *(undefined8 *)(param_2 + 0xe8);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
    if ((uVar3 & 1) == 0) {
      *(undefined4 *)(param_2 + 0x33c) = param_1;
      *(undefined4 *)(param_2 + 0x338) = 0;
      *(undefined4 *)(param_2 + 0x340) = uVar5;
      *(undefined4 *)(param_2 + 0x344) = uVar6;
      *(undefined4 *)(param_2 + 0x348) = uVar7;
      *(undefined4 *)(param_2 + 0x34c) = uVar8;
    }
  }
  return;
}

