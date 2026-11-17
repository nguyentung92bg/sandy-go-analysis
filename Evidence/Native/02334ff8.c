/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$State
Dino_BusSand_App_Meta_GiftPackState_o* Dino_BusSand_App_Meta_GiftPackFeature__State (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$State
   Dino_BusSand_App_Meta_GiftPackState_o* Dino_BusSand_App_Meta_GiftPackFeature__State
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t id, const MethodInfo* method); */

long Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8(undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar2 = PTR_DAT_04cb3390;
  if ((bRam0000000004f9be9e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3398);
    FUN_02132f7c(PTR_DAT_04cb33a0);
    FUN_02132f7c(PTR_DAT_04cb33a8);
    FUN_02132f7c(PTR_DAT_04cb33b0);
    FUN_02132f7c(PTR_DAT_04cb33b8);
    FUN_02132f7c(PTR_DAT_04cb33c0);
    FUN_02132f7c(PTR_DAT_04cb32c0);
    FUN_02132f7c(PTR_DAT_04cb32b8);
    FUN_02132f7c(PTR_DAT_04cb3390);
    bRam0000000004f9be9e = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  lVar6 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar2)
  ;
  if (lVar6 != 0) {
    plVar11 = (long *)(lVar6 + 0x10);
    lVar6 = *plVar11;
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb32b8);
      System_Collections_Generic_List_object____ctor_3a8138c(lVar6,*(undefined8 *)PTR_DAT_04cb32c0);
      *plVar11 = lVar6;
      thunk_FUN_02134474(plVar11,lVar6);
      lVar6 = *plVar11;
      if (lVar6 == 0) goto LAB_02335214;
    }
    puVar5 = PTR_DAT_04cb33b8;
    puVar4 = PTR_DAT_04cb33b0;
    puVar3 = PTR_DAT_04cb33a0;
    puVar2 = PTR_DAT_04cb3398;
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_58,lVar6,*(undefined8 *)PTR_DAT_04cb33c0);
    while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_58,*(undefined8 *)puVar3), lVar6 = lStack_48, (uVar7 & 1) != 0
          ) {
      if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(int *)(lStack_48 + 0x10) == param_2) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_58,*(undefined8 *)puVar2);
        return lVar6;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_58,*(undefined8 *)puVar2);
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
    Dino_BusSand_App_Meta_GiftPackState___ctor_223373c();
    if (lVar6 != 0) {
      lVar8 = *plVar11;
      *(int *)(lVar6 + 0x10) = param_2;
      if (lVar8 != 0) {
        lVar9 = *(long *)(lVar8 + 0x10);
        lVar10 = *(long *)puVar5;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar9 != 0) {
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            plVar11 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
            *plVar11 = lVar6;
            thunk_FUN_02134474(plVar11,lVar6);
            return lVar6;
          }
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar8,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
          ;
          return lVar6;
        }
      }
    }
  }
LAB_02335214:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

