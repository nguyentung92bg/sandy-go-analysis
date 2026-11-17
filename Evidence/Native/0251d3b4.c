/* IL2CPP: Dino.BusSand.Core.SimBot$$BlockedBy
int32_t Dino_BusSand_Core_SimBot__BlockedBy (Dino_BusSand_Core_StageEngine_o* e, Dino_BusSand_Core_Truck_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SimBot$$BlockedBy
   int32_t Dino_BusSand_Core_SimBot__BlockedBy (Dino_BusSand_Core_StageEngine_o* e,
   Dino_BusSand_Core_Truck_o* t, const MethodInfo* method); */

int Dino_BusSand_Core_SimBot__BlockedBy_241d3b4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  if ((bRam0000000004f9cb8a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cab9f8);
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04cae230);
    bRam0000000004f9cb8a = 1;
  }
  puVar4 = PTR_DAT_04cae230;
  puVar3 = PTR_DAT_04cab9f8;
  puVar2 = PTR_DAT_04cab9e8;
  puVar1 = PTR_DAT_04cab9e0;
  uStack_60 = 0;
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_68 = 0;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x28) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uStack_68 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0();
  Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
            (&uStack_80,&uStack_68,*(undefined8 *)puVar3);
  iVar8 = 0;
  lStack_50 = lStack_70;
  uStack_58 = puStack_78;
  uStack_60 = uStack_80;
  uStack_80 = 0;
  puStack_78 = &uStack_60;
  while( true ) {
    do {
      do {
        uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                          (&uStack_60,*(undefined8 *)puVar2);
        lVar7 = lStack_50;
        if ((uVar6 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (&uStack_60,*(undefined8 *)puVar1);
          return iVar8;
        }
      } while (lStack_50 == param_2);
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar6 = Dino_BusSand_Core_TruckGrid__CanTap_241c41c(*(long *)(param_1 + 0x28),lStack_50);
    } while ((uVar6 & 1) != 0);
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar7 = Dino_BusSand_Core_TruckGrid__BlockersOf_241cd5c(*(long *)(param_1 + 0x28),lVar7,0);
    if (lVar7 == 0) break;
    if (0 < *(int *)(lVar7 + 0x18)) {
      iVar5 = System_Collections_Generic_List_int___get_Item_3a2bd74(lVar7,0,*(undefined8 *)puVar4);
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (iVar5 == *(int *)(param_2 + 0x10)) {
        iVar8 = iVar8 + 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

