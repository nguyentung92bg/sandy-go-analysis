/* IL2CPP: Dino.BusSand.Cheat.CheatUiHider$$Hook
void Dino_BusSand_Cheat_CheatUiHider__Hook (Dino_BusSand_Cheat_CheatUiHider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatUiHider$$Hook
   void Dino_BusSand_Cheat_CheatUiHider__Hook (Dino_BusSand_Cheat_CheatUiHider_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_Cheat_CheatUiHider__Hook_236e070(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  if ((bRam0000000004f9c7b8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbaea8);
    FUN_02132f7c(PTR_DAT_04cbaeb0);
    bRam0000000004f9c7b8 = 1;
  }
  if ((*(char *)(param_1 + 0x10) == '\0') && (*(char *)(param_1 + 0x11) == '\0')) {
    if (*(char *)(param_1 + 0x4c) != '\0') {
      uVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbaeb0);
      UnityEngine_Canvas_WillRenderCanvases___ctor_468187c
                (uVar12,param_1,*(undefined8 *)PTR_DAT_04cbaea8,0);
      UnityEngine_Canvas__remove_willRenderCanvases_467f144(uVar12,0);
      *(undefined1 *)(param_1 + 0x4c) = 0;
    }
    if ((bRam0000000004f9c7bf & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cbaa00);
      FUN_02132f7c(PTR_DAT_04cbaf50);
      FUN_02132f7c(PTR_DAT_04cbaee8);
      FUN_02132f7c(PTR_DAT_04cbaef8);
      FUN_02132f7c(PTR_DAT_04cbaf08);
      FUN_02132f7c(PTR_DAT_04cbaf10);
      FUN_02132f7c(PTR_DAT_04cbaf30);
      bRam0000000004f9c7bf = 1;
    }
    uStack_58 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar18 = System_Collections_Generic_Dictionary_object__bool___get_Keys_34906d8
                           (*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_04cbaee8),
       puVar6 = PTR_DAT_04cbaf50, puVar5 = PTR_DAT_04cbaf08, puVar3 = PTR_DAT_04cbaef8,
       puVar4 = PTR_DAT_04cbaa00, lVar18 != 0)) {
      System_Collections_Generic_Dictionary_KeyCollection_object__bool___GetEnumerator_38f614c
                (&uStack_58,lVar18,*(undefined8 *)PTR_DAT_04cbaf30);
      uStack_68 = 0;
      while (uVar14 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__bool___MoveNext_36409c8
                                (&uStack_58,*(undefined8 *)puVar5), (uVar14 & 1) != 0) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_Cheat_CheatUiHider__Show_236f308(0);
      }
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__bool___Dispose_36409c4
                (&uStack_58,*(undefined8 *)puVar3);
      if (*(long *)(param_1 + 0x18) != 0) {
        System_Collections_Generic_Dictionary_object__bool___Clear_3490bb0
                  (*(long *)(param_1 + 0x18),*(undefined8 *)puVar6);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(char *)(param_1 + 0x4c) == '\0') {
    uVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbaeb0);
    UnityEngine_Canvas_WillRenderCanvases___ctor_468187c
              (uVar12,param_1,*(undefined8 *)PTR_DAT_04cbaea8,0);
    UnityEngine_Canvas__add_willRenderCanvases_467f088(uVar12,0);
    *(undefined1 *)(param_1 + 0x4c) = 1;
  }
  if ((bRam0000000004f9c7ba & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbaa00);
    FUN_02132f7c(PTR_DAT_04cbaee0);
    FUN_02132f7c(PTR_DAT_04cbaee8);
    FUN_02132f7c(PTR_DAT_04cbaef0);
    FUN_02132f7c(PTR_DAT_04cbaef8);
    FUN_02132f7c(PTR_DAT_04cbaf00);
    FUN_02132f7c(PTR_DAT_04cbaf08);
    FUN_02132f7c(PTR_DAT_04cbaf10);
    FUN_02132f7c(PTR_DAT_04cbaf18);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cbaf20);
    FUN_02132f7c(PTR_DAT_04cbaf28);
    FUN_02132f7c(PTR_DAT_04cbaf30);
    FUN_02132f7c(PTR_DAT_04cbaf38);
    FUN_02132f7c(PTR_DAT_04cbaf40);
    FUN_02132f7c(PTR_DAT_04cbaf48);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb8010);
    bRam0000000004f9c7ba = 1;
  }
  puVar4 = PTR_DAT_04caba50;
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  if ((*(char *)(param_1 + 0x10) == '\0') && (*(char *)(param_1 + 0x11) == '\0')) {
    return;
  }
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar18 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  puVar3 = PTR_DAT_04ca9ae8;
  lVar13 = *(long *)puVar4;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar13 = *(long *)puVar4;
  }
  uVar12 = **(undefined8 **)(lVar13 + 0xb8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar14 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
  lVar13 = 0;
  if ((uVar14 & 1) != 0) {
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar13 = *(long *)puVar4;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar13 = *(long *)puVar4;
    }
    if (**(long **)(lVar13 + 0xb8) == 0) goto LAB_0246e8e0;
    lVar13 = *(long *)(**(long **)(lVar13 + 0xb8) + 0x48);
  }
  puVar4 = PTR_DAT_04cbaa00;
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_0246e8e0;
  System_Collections_Generic_HashSet_object___Clear_37e59fc
            (*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_04cbaf20);
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar14 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
    if ((uVar14 & 1) != 0) {
      if (lVar13 == 0) goto LAB_0246e8e0;
      uVar12 = UnityEngine_Component__get_transform_43bcd18(lVar13,0);
      lVar18 = *(long *)puVar4;
      if (*(int *)(lVar18 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar18);
        lVar18 = *(long *)puVar4;
      }
      uVar15 = *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 8);
LAB_0246e66c:
      Dino_BusSand_Cheat_CheatUiHider__HideOutside_236ef68(param_1,uVar12,lVar13,uVar15);
    }
  }
  else {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar14 = UnityEngine_Object__op_Inequality_43c8dec(lVar18,0,0);
    if ((uVar14 & 1) != 0) {
      if (lVar18 == 0) goto LAB_0246e8e0;
      uVar12 = *(undefined8 *)(lVar18 + 0x28);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar14 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
      if ((uVar14 & 1) != 0) {
        if (*(long *)(lVar18 + 0x28) == 0) goto LAB_0246e8e0;
        uVar12 = UnityEngine_Component__get_transform_43bcd18(*(long *)(lVar18 + 0x28),0);
        lVar18 = *(long *)puVar4;
        if (*(int *)(lVar18 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar18);
          lVar18 = *(long *)puVar4;
        }
        uVar15 = **(undefined8 **)(lVar18 + 0xb8);
        goto LAB_0246e66c;
      }
    }
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar14 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
  uVar12 = 0;
  if ((uVar14 & 1) != 0) {
    if (lVar13 == 0) goto LAB_0246e8e0;
    uVar12 = Dino_BusSand_App_UI_HudPanel__Find_230a038(lVar13,*(undefined8 *)PTR_DAT_04cb8010,0);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar14 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
  if ((uVar14 & 1) != 0) {
    Dino_BusSand_Cheat_CheatUiHider__Hide_236f16c(param_1,uVar12);
  }
  lVar18 = *(long *)(param_1 + 0x38);
  if (lVar18 != 0) {
    iVar1 = *(int *)(lVar18 + 0x18);
    *(undefined4 *)(lVar18 + 0x18) = 0;
    *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear_4851dc8(*(undefined8 *)(lVar18 + 0x10),0,iVar1,0);
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar18 = System_Collections_Generic_Dictionary_object__bool___get_Keys_34906d8
                           (*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_04cbaee8),
       puVar11 = PTR_DAT_04cbaf48, puVar10 = PTR_DAT_04cbaf38, puVar9 = PTR_DAT_04cbaf28,
       puVar8 = PTR_DAT_04cbaf08, puVar7 = PTR_DAT_04cbaf00, puVar6 = PTR_DAT_04cbaef8,
       puVar5 = PTR_DAT_04cbaef0, puVar3 = PTR_DAT_04cbaee0, lVar18 != 0)) {
      System_Collections_Generic_Dictionary_KeyCollection_object__bool___GetEnumerator_38f614c
                (&uStack_b0,lVar18,*(undefined8 *)PTR_DAT_04cbaf30);
      uStack_70 = uStack_a0;
      puStack_78 = puStack_a8;
      uStack_80 = uStack_b0;
      uStack_b0 = 0;
      puStack_a8 = &uStack_80;
LAB_0246e7a8:
      uVar14 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__bool___MoveNext_36409c8
                         (&uStack_80,*(undefined8 *)puVar8);
      uVar12 = uStack_70;
      if ((uVar14 & 1) != 0) {
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar14 = System_Collections_Generic_HashSet_object___Contains_37e5a5c
                           (*(long *)(param_1 + 0x20),uStack_70,*(undefined8 *)puVar9);
        if ((uVar14 & 1) == 0) {
          lVar18 = *(long *)(param_1 + 0x38);
          if (lVar18 != 0) {
            lVar13 = *(long *)(lVar18 + 0x10);
            lVar17 = *(long *)puVar10;
            *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
            if (lVar13 != 0) {
              uVar2 = *(uint *)(lVar18 + 0x18);
              if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar18 + 0x18) = uVar2 + 1;
                puVar16 = (undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
                *puVar16 = uVar12;
                thunk_FUN_02134474(puVar16,uVar12);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar18,uVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_0246e7a8;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        goto LAB_0246e7a8;
      }
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__bool___Dispose_36409c4
                (&uStack_80,*(undefined8 *)puVar6);
      if (*(long *)(param_1 + 0x38) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_98,*(long *)(param_1 + 0x38),*(undefined8 *)puVar11);
        uStack_b0 = 0;
        puStack_a8 = &uStack_98;
        while( true ) {
          uVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_98,*(undefined8 *)puVar7);
          uVar12 = uStack_88;
          if ((uVar14 & 1) == 0) {
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_98,*(undefined8 *)puVar5);
            return;
          }
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_Cheat_CheatUiHider__Show_236f308(uVar12);
          if (*(long *)(param_1 + 0x18) == 0) break;
          System_Collections_Generic_Dictionary_object__bool___Remove_3491f14
                    (*(long *)(param_1 + 0x18),uVar12,*(undefined8 *)puVar3);
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
LAB_0246e8e0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

