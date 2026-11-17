/* IL2CPP: Dino.BusSand.App.UI.KitParts$$ItemIcon
UnityEngine_Sprite_o* Dino_BusSand_App_UI_KitParts__ItemIcon (int32_t item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitParts$$ItemIcon
   UnityEngine_Sprite_o* Dino_BusSand_App_UI_KitParts__ItemIcon (int32_t item, const MethodInfo*
   method); */

ulong Dino_BusSand_App_UI_KitParts__ItemIcon_23100d0(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
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
  ulong uStack_68;
  
  if ((bRam0000000004f9c546 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabf58);
    FUN_02132f7c(PTR_DAT_04cb8090);
    FUN_02132f7c(PTR_DAT_04cb8098);
    FUN_02132f7c(PTR_DAT_04cb80b8);
    FUN_02132f7c(PTR_DAT_04cb80c8);
    bRam0000000004f9c546 = 1;
  }
  if ((3 < param_1 - 0x2712U) ||
     (lVar12 = **(long **)(&UNK_049bb840 + (ulong)(param_1 - 0x2712U) * 8), lVar12 == 0)) {
    if (*(int *)(*(long *)PTR_DAT_04cabf58 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = Dino_BusSand_App_SpriteSkin__ItemIconKey_215e1cc(param_1,0);
    Dino_BusSand_App_SpriteSkin__TryGet_215e2dc(uVar11,&stack0xffffffffffffffe8,0);
    return 0;
  }
  if ((bRam0000000004f9c268 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004f9c268 = 1;
  }
  uVar8 = System_String__IsNullOrEmpty_46d2084(lVar12,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if ((uVar8 & 1) != 0) {
    return 0;
  }
  lVar9 = Dino_BusSand_App_UI_UiSkin__get_BootOnly_22a207c(0);
  lVar13 = *(long *)puVar1;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar13);
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
  if ((uVar8 & 1) != 0) {
    if (lVar9 == 0) goto LAB_023a24e8;
    lVar9 = Dino_BusSand_App_UI_UiSkin__Find_22a24ec(lVar9,lVar12,0);
    if (lVar9 != 0) {
      return lVar9;
    }
  }
  lVar9 = Dino_BusSand_App_UI_UiSkin__get_I_22a1e1c();
  lVar13 = *(long *)puVar1;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar13);
  }
  uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
  uVar8 = 0;
  if ((uVar10 & 1) == 0) {
    return 0;
  }
  if (lVar9 == 0) {
LAB_023a24e8:
                    /* WARNING: Subroutine does not return */
    FUN_02133224(uVar8);
  }
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
  plVar14 = (long *)(lVar9 + 0x38);
  lVar13 = *plVar14;
  uStack_80 = 0;
  puStack_b8 = (undefined8 *)0x0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  puStack_98 = (undefined8 *)0x0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (lVar13 == 0) {
    uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cabf78);
    System_Collections_Generic_Dictionary_object__object____ctor_34b3628
              (uVar11,*(undefined8 *)PTR_DAT_04cabf70);
    *(undefined8 *)(lVar9 + 0x38) = uVar11;
    thunk_FUN_02134474(plVar14,uVar11);
    if (*(long *)(lVar9 + 0x20) == 0) goto LAB_023a2a9c;
    System_Collections_Generic_List_UiSkin_SpriteEntry___GetEnumerator_2ac19c0
              (&uStack_e8,*(long *)(lVar9 + 0x20),*(undefined8 *)PTR_DAT_04cb5a50);
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
    while (uVar8 = System_Collections_Generic_List_Enumerator_UiSkin_SpriteEntry___MoveNext_36189e8
                             (&uStack_a0,*(undefined8 *)puVar4), uVar6 = uStack_80,
          uVar5 = uStack_88, uVar11 = uStack_90, (uVar8 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
      if ((uVar8 & 1) != 0) {
        if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey_34b4598
                          (*plVar14,uVar11,*(undefined8 *)puVar3);
        if ((uVar7 & (uint)uVar6 & 1) == 0) {
          if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                    (*plVar14,uVar11,uVar5,*(undefined8 *)puVar2);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_UiSkin_SpriteEntry___Dispose_36189e4
              (&uStack_a0,*(undefined8 *)PTR_DAT_04cb5a20);
    lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa788);
    System_Collections_Generic_Dictionary_object__object____ctor_34b3628
              (lVar13,*(undefined8 *)PTR_DAT_04caa780);
    plVar15 = (long *)(lVar9 + 0x40);
    *plVar15 = lVar13;
    thunk_FUN_02134474(plVar15,lVar13);
    if (*(long *)(lVar9 + 0x30) == 0) goto LAB_023a2a9c;
    System_Collections_Generic_List_UiSkin_AliasEntry___GetEnumerator_2abc518
              (&uStack_e8,*(long *)(lVar9 + 0x30),*(undefined8 *)PTR_DAT_04cb5a48);
    puVar2 = PTR_DAT_04cb5a30;
    puVar1 = PTR_DAT_04caaf80;
    puStack_b8 = puStack_e0;
    uStack_c0 = uStack_e8;
    uStack_a8 = uStack_d0;
    uStack_b0 = uStack_d8;
    uStack_e8 = 0;
    puStack_e0 = &uStack_c0;
    while (uVar8 = System_Collections_Generic_List_Enumerator_UiSkin_AliasEntry___MoveNext_36185d4
                             (&uStack_c0,*(undefined8 *)puVar2), (uVar8 & 1) != 0) {
      if (*plVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                (*plVar15,uStack_b0,uStack_a8,*(undefined8 *)puVar1);
    }
    System_Collections_Generic_List_Enumerator_UiSkin_AliasEntry___Dispose_36185d0
              (&uStack_c0,*(undefined8 *)PTR_DAT_04cb5a18);
    uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab800);
    System_Collections_Generic_HashSet_object____ctor_37e5358
              (uVar11,*(undefined8 *)PTR_DAT_04cab7f0);
    *(undefined8 *)(lVar9 + 0x48) = uVar11;
    thunk_FUN_02134474((undefined8 *)(lVar9 + 0x48),uVar11);
    lVar13 = *(long *)(lVar9 + 0x38);
    if (lVar13 == 0) goto LAB_023a2a9c;
  }
  puVar1 = PTR_DAT_04cabf48;
  uVar8 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                    (lVar13,lVar12,&uStack_68,*(undefined8 *)PTR_DAT_04cabf48);
  if ((uVar8 & 1) == 0) {
    if (*(long *)(lVar9 + 0x40) == 0) goto LAB_023a2a9c;
    uVar8 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (*(long *)(lVar9 + 0x40),lVar12,&uStack_70,*(undefined8 *)PTR_DAT_04cab608);
    if ((uVar8 & 1) != 0) {
      if (*plVar14 == 0) {
LAB_023a2a9c:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar8 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                        (*plVar14,uStack_70,&uStack_68,*(undefined8 *)puVar1);
      if ((uVar8 & 1) != 0) {
        if (*(long *)(lVar9 + 0x48) != 0) {
          uVar8 = System_Collections_Generic_HashSet_object___Add_37e654c
                            (*(long *)(lVar9 + 0x48),lVar12,*(undefined8 *)PTR_DAT_04cab7e0);
          if ((uVar8 & 1) == 0) {
            return uStack_68;
          }
          lVar9 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,5);
          if (lVar9 != 0) {
            if (*(int *)(lVar9 + 0x18) != 0) {
              *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_04cb5a68;
              thunk_FUN_02134474((undefined8 *)(lVar9 + 0x20));
              if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
                *(long *)(lVar9 + 0x28) = lVar12;
                thunk_FUN_02134474((long *)(lVar9 + 0x28),lVar12);
                if (2 < *(uint *)(lVar9 + 0x18)) {
                  *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)PTR_DAT_04cb5a60;
                  thunk_FUN_02134474((undefined8 *)(lVar9 + 0x30));
                  if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) != 0) {
                    *(undefined8 *)(lVar9 + 0x38) = uStack_70;
                    thunk_FUN_02134474((undefined8 *)(lVar9 + 0x38));
                    if (4 < *(uint *)(lVar9 + 0x18)) {
                      *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)PTR_DAT_04cb5a70;
                      thunk_FUN_02134474();
                      uVar11 = System_String__Concat_46d31f0(lVar9,0);
                      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
                        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
                      }
                      UnityEngine_Debug__LogWarning_4357a30(uVar11,0);
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
    uVar11 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb5a58,lVar12,0);
    if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
    }
    UnityEngine_Debug__LogWarning_4357a30(uVar11,0);
    uStack_68 = 0;
  }
  return uStack_68;
}

