/* IL2CPP: Dino.BusSand.Core.Truck$$get_Obb
Dino_BusSand_Core_BusObb_o Dino_BusSand_Core_Truck__get_Obb (Dino_BusSand_Core_Truck_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Truck$$get_Obb
   Dino_BusSand_Core_BusObb_o Dino_BusSand_Core_Truck__get_Obb (Dino_BusSand_Core_Truck_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_Core_Truck__get_Obb_242cab0(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = PTR_DAT_04cbc080;
  if ((bRam0000000004f9cbd3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    bRam0000000004f9cbd3 = 1;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Core_BusGeometry__Make_242bfa4(&uStack_70,uVar4,uVar5,uVar1,uVar2);
  param_1[5] = uStack_48;
  param_1[4] = uStack_50;
  param_1[1] = uStack_68;
  *param_1 = uStack_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  return;
}

