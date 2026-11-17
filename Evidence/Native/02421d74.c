/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$get_Gifts
Dino_BusSand_App_Meta_GiftPackFeature_o* Dino_BusSand_App_UI_LiveOpsHome__get_Gifts (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome$$get_Gifts
   Dino_BusSand_App_Meta_GiftPackFeature_o* Dino_BusSand_App_UI_LiveOpsHome__get_Gifts (const
   MethodInfo* method); */

long Dino_BusSand_App_UI_LiveOpsHome__get_Gifts_2321d74(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04cac668;
  if ((bRam0000000004f9c5bf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf6f8);
    FUN_02132f7c(PTR_DAT_04cac668);
    bRam0000000004f9c5bf = 1;
  }
  puVar2 = PTR_DAT_04caf6f8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = *(long *)puVar2;
  if (*(long *)(lVar4 + 0x38) == 0) {
    FUN_02132f7c(PTR_DAT_04cb37f8);
    FUN_02132f7c(PTR_DAT_04cb3800);
    FUN_02132f7c(PTR_DAT_04cb3808);
    FUN_02132f7c(PTR_DAT_04cb3818);
    FUN_02132f7c(PTR_DAT_04cac668);
    if (*(long *)(lVar4 + 0x38) == 0) {
      FUN_0216b4cc(lVar4);
    }
  }
  puVar1 = PTR_DAT_04cac668;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  lVar5 = *(long *)PTR_DAT_04cac668;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar1;
  }
  if (**(long **)(lVar5 + 0xb8) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_38,**(long **)(lVar5 + 0xb8),*(undefined8 *)PTR_DAT_04cb3818);
    puVar1 = PTR_DAT_04cb3800;
    do {
      uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_38,*(undefined8 *)puVar1);
      uVar3 = uStack_28;
      if ((uVar6 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_38,*(undefined8 *)PTR_DAT_04cb37f8);
        return 0;
      }
      lVar5 = **(long **)(lVar4 + 0x38);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0216b470(lVar5);
      }
      lVar5 = thunk_FUN_0216e7a0(uVar3,lVar5);
    } while (lVar5 == 0);
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_38,*(undefined8 *)PTR_DAT_04cb37f8);
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

