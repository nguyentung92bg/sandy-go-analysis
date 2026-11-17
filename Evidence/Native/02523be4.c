/* IL2CPP: Dino.BusSand.Core.TruckGrid$$CanEscape
bool Dino_BusSand_Core_TruckGrid__CanEscape (Dino_BusSand_Core_TruckGrid_o* __this, Dino_BusSand_Core_Truck_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.TruckGrid$$CanEscape
   bool Dino_BusSand_Core_TruckGrid__CanEscape (Dino_BusSand_Core_TruckGrid_o* __this,
   Dino_BusSand_Core_Truck_o* t, const MethodInfo* method); */

uint Dino_BusSand_Core_TruckGrid__CanEscape_2423be4(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_24;
  
  if ((bRam0000000004f9cbe3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04cbe9c0);
    bRam0000000004f9cbe3 = 1;
  }
  uStack_24 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar5 = System_Collections_Generic_Dictionary_int__object___ContainsKey_3437520
                      (*(long *)(param_1 + 0x18),*(undefined4 *)(param_2 + 0x10),
                       *(undefined8 *)PTR_DAT_04cbe9c0);
    if ((uVar5 & 1) != 0) {
      uVar6 = Dino_BusSand_Core_TruckGrid__CollectObbs_242cfd0(param_1,param_2,0,&uStack_24);
      Dino_BusSand_Core_Truck__get_Obb_242cab0(&uStack_60,param_2);
      uVar3 = uStack_24;
      iVar1 = *(int *)(param_1 + 0x10);
      iVar2 = *(int *)(param_1 + 0x14);
      if (*(int *)(*(long *)PTR_DAT_04cbc080 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = Dino_BusSand_Core_BusGeometry__CanEscape_242c428
                        ((double)iVar2,(double)iVar1,_UNK_00e6a330,&uStack_60,uVar6,uVar3);
      goto LAB_02527bdc;
    }
  }
  uVar4 = 0;
LAB_02527bdc:
  return uVar4 & 1;
}

