/* IL2CPP: Dino.BusSand.Core.TruckGrid$$MaxForwardAdvance
double Dino_BusSand_Core_TruckGrid__MaxForwardAdvance (Dino_BusSand_Core_TruckGrid_o* __this, Dino_BusSand_Core_Truck_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.TruckGrid$$MaxForwardAdvance
   double Dino_BusSand_Core_TruckGrid__MaxForwardAdvance (Dino_BusSand_Core_TruckGrid_o* __this,
   Dino_BusSand_Core_Truck_o* t, const MethodInfo* method); */

undefined1  [16] Dino_BusSand_Core_TruckGrid__MaxForwardAdvance_242d6ac(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  ulong uVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_34;
  
  if ((bRam0000000004f9cbe7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04cbe9c0);
    bRam0000000004f9cbe7 = 1;
  }
  uVar7 = 0;
  uStack_34 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar4 = System_Collections_Generic_Dictionary_int__object___ContainsKey_3437520
                      (*(long *)(param_1 + 0x18),*(undefined4 *)(param_2 + 0x10),
                       *(undefined8 *)PTR_DAT_04cbe9c0);
    if ((uVar4 & 1) != 0) {
      uVar5 = Dino_BusSand_Core_TruckGrid__CollectObbs_242cfd0(param_1,param_2,0,&uStack_34);
      Dino_BusSand_Core_Truck__get_Obb_242cab0(&uStack_70,param_2);
      uVar3 = uStack_34;
      iVar1 = *(int *)(param_1 + 0x10);
      iVar2 = *(int *)(param_1 + 0x14);
      if (*(int *)(*(long *)PTR_DAT_04cbc080 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = Dino_BusSand_Core_BusGeometry__MaxForwardAdvance_242c598
                        ((double)iVar2,(double)iVar1,&uStack_70,uVar5,uVar3);
    }
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar7;
  return auVar6;
}

