/* IL2CPP: Dino.BusSand.Core.TruckGrid$$CanTap
bool Dino_BusSand_Core_TruckGrid__CanTap (Dino_BusSand_Core_TruckGrid_o* __this, Dino_BusSand_Core_Truck_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Core.TruckGrid$$CanTap
   bool Dino_BusSand_Core_TruckGrid__CanTap (Dino_BusSand_Core_TruckGrid_o* __this,
   Dino_BusSand_Core_Truck_o* t, const MethodInfo* method); */

uint Dino_BusSand_Core_TruckGrid__CanTap_241c41c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined4 uStack_24;
  
  if ((bRam0000000004f9cbe4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe9c0);
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cbc4c0);
    bRam0000000004f9cbe4 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (param_2 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
LAB_0251c594:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey_3437520
                    (*(long *)(param_1 + 0x18),*(undefined4 *)(param_2 + 0x10),
                     *(undefined8 *)PTR_DAT_04cbe9c0);
  if ((((uVar6 & 1) == 0) || (0 < *(int *)(param_2 + 0x30))) || (0 < *(int *)(param_2 + 0x34))) {
    return 0;
  }
  if (0 < *(int *)(param_2 + 0x40)) {
    if (*(long *)(param_1 + 0x20) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_48,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_04cbc4c0);
      puVar3 = PTR_DAT_04cab9e8;
      uStack_58 = 0;
      puStack_50 = &uStack_48;
      while( true ) {
        uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                          (&uStack_48,*(undefined8 *)puVar3);
        if ((uVar6 & 1) == 0) {
          FUN_01e77e4c(&uStack_58);
          return 1;
        }
        if (lStack_38 == 0) break;
        if ((*(int *)(lStack_38 + 0x40) == *(int *)(param_2 + 0x40)) &&
           (((0 < *(int *)(lStack_38 + 0x30) || (0 < *(int *)(lStack_38 + 0x34))) ||
            (uVar6 = Dino_BusSand_Core_TruckGrid__CanEscape_2427af4(param_1,lStack_38,1),
            (uVar6 & 1) == 0)))) {
          FUN_01e77e4c(&uStack_58);
          return 0;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    goto LAB_0251c594;
  }
  if ((bRam0000000004f9cbe3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04cbe9c0);
    bRam0000000004f9cbe3 = 1;
  }
  uStack_24 = 0;
  uStack_48 = 0;
  puStack_50 = (undefined8 *)0x0;
  lStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey_3437520
                      (*(long *)(param_1 + 0x18),*(undefined4 *)(param_2 + 0x10),
                       *(undefined8 *)PTR_DAT_04cbe9c0);
    if ((uVar6 & 1) != 0) {
      uVar7 = Dino_BusSand_Core_TruckGrid__CollectObbs_242cfd0(param_1,param_2,0,&uStack_24);
      Dino_BusSand_Core_Truck__get_Obb_242cab0(&uStack_60,param_2);
      uVar4 = uStack_24;
      iVar1 = *(int *)(param_1 + 0x10);
      iVar2 = *(int *)(param_1 + 0x14);
      if (*(int *)(*(long *)PTR_DAT_04cbc080 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = Dino_BusSand_Core_BusGeometry__CanEscape_242c428
                        ((double)iVar2,(double)iVar1,_UNK_00e6a330,&uStack_60,uVar7,uVar4);
      goto LAB_02527bdc;
    }
  }
  uVar5 = 0;
LAB_02527bdc:
  return uVar5 & 1;
}

