/* IL2CPP: Dino.BusSand.App.UI.UiSkin$$Find
UnityEngine_Sprite_o* Dino_BusSand_App_UI_UiSkin__Find (Dino_BusSand_App_UI_UiSkin_o* __this, System_String_o* key, bool report, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiSkin$$Find
   UnityEngine_Sprite_o* Dino_BusSand_App_UI_UiSkin__Find (Dino_BusSand_App_UI_UiSkin_o* __this,
   System_String_o* key, bool report, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_UiSkin__Find_22a24ec(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000004f9c269 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cb5a10);
    FUN_02132f7c(PTR_DAT_04cab608);
    FUN_02132f7c(PTR_DAT_04cabf48);
    FUN_02132f7c(PTR_DAT_04caa780);
    FUN_02132f7c(PTR_DAT_04cabf70);
    FUN_02132f7c(PTR_DAT_04caaf80);
    FUN_02132f7c(PTR_DAT_04cabf50);
    FUN_02132f7c(PTR_DAT_04caa788);
    FUN_02132f7c(PTR_DAT_04cabf78);
    FUN_02132f7c(PTR_DAT_04cb5a18);
    FUN_02132f7c(PTR_DAT_04cb5a20);
    FUN_02132f7c(PTR_DAT_04cb5a28);
    FUN_02132f7c(PTR_DAT_04cb5a30);
    FUN_02132f7c(PTR_DAT_04cb5a38);
    FUN_02132f7c(PTR_DAT_04cb5a40);
    FUN_02132f7c(PTR_DAT_04cab7e0);
    FUN_02132f7c(PTR_DAT_04cab7f0);
    FUN_02132f7c(PTR_DAT_04cab800);
    FUN_02132f7c(PTR_DAT_04cb5a48);
    FUN_02132f7c(PTR_DAT_04cb5a50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cb5a58);
    FUN_02132f7c(PTR_DAT_04cb5a60);
    FUN_02132f7c(PTR_DAT_04cb5a68);
    FUN_02132f7c(PTR_DAT_04cb5a70);
    bRam0000000004f9c269 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  plVar11 = (long *)(param_1 + 0x38);
  lVar8 = *plVar11;
  uStack_80 = 0;
  puStack_b8 = (undefined8 *)0x0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  puStack_98 = (undefined8 *)0x0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (lVar8 == 0) {
    uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cabf78);
    System_Collections_Generic_Dictionary_object__object____ctor_34b3628
              (uVar9,*(undefined8 *)PTR_DAT_04cabf70);
    *(undefined8 *)(param_1 + 0x38) = uVar9;
    thunk_FUN_02134474(plVar11,uVar9);
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_023a2a9c;
    System_Collections_Generic_List_UiSkin_SpriteEntry___GetEnumerator_2ac19c0
              (&uStack_e8,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_04cb5a50);
    puVar4 = PTR_DAT_04cb5a28;
    puVar3 = PTR_DAT_04cb5a10;
    puVar2 = PTR_DAT_04cabf50;
    puVar1 = PTR_DAT_04ca9ae8;
    puStack_98 = puStack_e0;
    uStack_a0 = uStack_e8;
    uStack_88 = uStack_d0;
    uStack_90 = uStack_d8;
    uStack_80 = uStack_c8;
    puStack_e0 = &uStack_a0;
    uStack_e8 = 0;
    while (uVar10 = System_Collections_Generic_List_Enumerator_UiSkin_SpriteEntry___MoveNext_36189e8
                              (&uStack_a0,*(undefined8 *)puVar4), uVar6 = uStack_80,
          uVar5 = uStack_88, uVar9 = uStack_90, (uVar10 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
      if ((uVar10 & 1) != 0) {
        if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey_34b4598
                          (*plVar11,uVar9,*(undefined8 *)puVar3);
        if ((uVar7 & (uint)uVar6 & 1) == 0) {
          if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                    (*plVar11,uVar9,uVar5,*(undefined8 *)puVar2);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_UiSkin_SpriteEntry___Dispose_36189e4
              (&uStack_a0,*(undefined8 *)PTR_DAT_04cb5a20);
    lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa788);
    System_Collections_Generic_Dictionary_object__object____ctor_34b3628
              (lVar8,*(undefined8 *)PTR_DAT_04caa780);
    plVar12 = (long *)(param_1 + 0x40);
    *plVar12 = lVar8;
    thunk_FUN_02134474(plVar12,lVar8);
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_023a2a9c;
    System_Collections_Generic_List_UiSkin_AliasEntry___GetEnumerator_2abc518
              (&uStack_e8,*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_04cb5a48);
    puVar2 = PTR_DAT_04cb5a30;
    puVar1 = PTR_DAT_04caaf80;
    puStack_b8 = puStack_e0;
    uStack_c0 = uStack_e8;
    uStack_a8 = uStack_d0;
    uStack_b0 = uStack_d8;
    uStack_e8 = 0;
    puStack_e0 = &uStack_c0;
    while (uVar10 = System_Collections_Generic_List_Enumerator_UiSkin_AliasEntry___MoveNext_36185d4
                              (&uStack_c0,*(undefined8 *)puVar2), (uVar10 & 1) != 0) {
      if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                (*plVar12,uStack_b0,uStack_a8,*(undefined8 *)puVar1);
    }
    System_Collections_Generic_List_Enumerator_UiSkin_AliasEntry___Dispose_36185d0
              (&uStack_c0,*(undefined8 *)PTR_DAT_04cb5a18);
    uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab800);
    System_Collections_Generic_HashSet_object____ctor_37e5358(uVar9,*(undefined8 *)PTR_DAT_04cab7f0)
    ;
    *(undefined8 *)(param_1 + 0x48) = uVar9;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x48),uVar9);
    lVar8 = *(long *)(param_1 + 0x38);
    if (lVar8 == 0) goto LAB_023a2a9c;
  }
  puVar1 = PTR_DAT_04cabf48;
  uVar10 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                     (lVar8,param_2,&uStack_68,*(undefined8 *)PTR_DAT_04cabf48);
  if ((uVar10 & 1) != 0) {
    return uStack_68;
  }
  if ((param_3 & 1) != 0) {
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_023a2a9c;
    uVar10 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                       (*(long *)(param_1 + 0x40),param_2,&uStack_70,*(undefined8 *)PTR_DAT_04cab608
                       );
    if ((uVar10 & 1) != 0) {
      if (*plVar11 == 0) {
LAB_023a2a9c:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar10 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                         (*plVar11,uStack_70,&uStack_68,*(undefined8 *)puVar1);
      if ((uVar10 & 1) != 0) {
        if (*(long *)(param_1 + 0x48) != 0) {
          uVar10 = System_Collections_Generic_HashSet_object___Add_37e654c
                             (*(long *)(param_1 + 0x48),param_2,*(undefined8 *)PTR_DAT_04cab7e0);
          if ((uVar10 & 1) == 0) {
            return uStack_68;
          }
          lVar8 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,5);
          if (lVar8 != 0) {
            if (*(int *)(lVar8 + 0x18) != 0) {
              *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)PTR_DAT_04cb5a68;
              thunk_FUN_02134474((undefined8 *)(lVar8 + 0x20));
              if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar8 + 0x28) = param_2;
                thunk_FUN_02134474((undefined8 *)(lVar8 + 0x28),param_2);
                if (2 < *(uint *)(lVar8 + 0x18)) {
                  *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)PTR_DAT_04cb5a60;
                  thunk_FUN_02134474((undefined8 *)(lVar8 + 0x30));
                  if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) != 0) {
                    *(undefined8 *)(lVar8 + 0x38) = uStack_70;
                    thunk_FUN_02134474((undefined8 *)(lVar8 + 0x38));
                    if (4 < *(uint *)(lVar8 + 0x18)) {
                      *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)PTR_DAT_04cb5a70;
                      thunk_FUN_02134474();
                      uVar9 = System_String__Concat_46d31f0(lVar8,0);
                      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
                        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
                      }
                      UnityEngine_Debug__LogWarning_4357a30(uVar9,0);
                      return uStack_68;
                    }
                  }
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
        }
        goto LAB_023a2a9c;
      }
    }
    uVar9 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb5a58,param_2,0);
    if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
    }
    UnityEngine_Debug__LogWarning_4357a30(uVar9,0);
  }
  return 0;
}

