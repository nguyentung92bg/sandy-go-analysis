/* IL2CPP: Dino.BusSand.Cheat.CheatHint$$BuildHand
void Dino_BusSand_Cheat_CheatHint__BuildHand (Dino_BusSand_Cheat_CheatHint_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatHint$$BuildHand
   void Dino_BusSand_Cheat_CheatHint__BuildHand (Dino_BusSand_Cheat_CheatHint_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_Cheat_CheatHint__BuildHand_235b60c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  puVar3 = PTR_DAT_04cad748;
  puVar1 = PTR_DAT_04cad730;
  if ((bRam0000000004f9c729 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba440);
    FUN_02132f7c(PTR_DAT_04cacf98);
    FUN_02132f7c(PTR_DAT_04cb68a0);
    FUN_02132f7c(PTR_DAT_04cb9558);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad730);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cb9560);
    FUN_02132f7c(PTR_DAT_04cad450);
    FUN_02132f7c(PTR_DAT_04cb6aa8);
    FUN_02132f7c(PTR_DAT_04cb6ab0);
    FUN_02132f7c(PTR_DAT_04cb6ab8);
    bRam0000000004f9c729 = 1;
  }
  plVar6 = (long *)FUN_02133068(*(undefined8 *)puVar3,1);
  uVar12 = *(undefined8 *)puVar1;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  lVar7 = System_Type__GetTypeFromHandle_483f0b4(uVar12,0);
  if (plVar6 == (long *)0x0) goto LAB_0245bba8;
  if ((lVar7 != 0) &&
     (lVar8 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_0245bbb0:
    uVar12 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar12,0);
  }
  puVar5 = PTR_DAT_04cb9560;
  puVar2 = PTR_DAT_04caa070;
  if ((int)plVar6[3] == 0) {
LAB_0245bbac:
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  plVar6[4] = lVar7;
  thunk_FUN_02134474(plVar6 + 4,lVar7);
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  UnityEngine_GameObject___ctor_43c2310(lVar7,*(undefined8 *)puVar5,plVar6,0);
  puVar5 = PTR_DAT_04cb9558;
  if (lVar7 != 0) {
    lVar7 = UnityEngine_GameObject__GetComponent_object__275a5dc
                      (lVar7,*(undefined8 *)PTR_DAT_04cb9558);
    plVar6 = (long *)(param_1 + 0x28);
    *plVar6 = lVar7;
    thunk_FUN_02134474(plVar6,lVar7);
    if (*plVar6 != 0) {
      UnityEngine_Transform__SetParent_43d1e34(*plVar6,*(undefined8 *)(param_1 + 0x20),0,0);
      lVar7 = *(long *)(param_1 + 0x28);
      if (cRam0000000004f9b948 == '\0') {
        FUN_02132f7c(PTR_DAT_04cacfc0);
        cRam0000000004f9b948 = '\x01';
      }
      puVar4 = PTR_DAT_04cacfc0;
      if (lVar7 != 0) {
        uVar14 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
        uVar13 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
        UnityEngine_RectTransform__set_anchorMax_43cf768(uVar14,uVar13,lVar7,0);
        UnityEngine_RectTransform__set_anchorMin_43cf5e4(uVar14,uVar13,lVar7,0);
        lVar7 = *plVar6;
        if (cRam0000000004f9b948 == '\0') {
          FUN_02132f7c(PTR_DAT_04cacfc0);
          cRam0000000004f9b948 = '\x01';
        }
        if (lVar7 != 0) {
          UnityEngine_RectTransform__set_sizeDelta_43cfa70
                    (**(undefined4 **)(*(long *)puVar4 + 0xb8),
                     (*(undefined4 **)(*(long *)puVar4 + 0xb8))[1],lVar7,0);
          plVar9 = (long *)FUN_02133068(*(undefined8 *)puVar3,1);
          lVar7 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)puVar1,0);
          if (plVar9 != (long *)0x0) {
            if ((lVar7 != 0) &&
               (lVar8 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
            goto LAB_0245bbb0;
            puVar1 = PTR_DAT_04cad450;
            if ((int)plVar9[3] == 0) goto LAB_0245bbac;
            plVar9[4] = lVar7;
            thunk_FUN_02134474(plVar9 + 4,lVar7);
            lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
            UnityEngine_GameObject___ctor_43c2310(lVar7,*(undefined8 *)puVar1,plVar9,0);
            if (lVar7 != 0) {
              lVar7 = UnityEngine_GameObject__GetComponent_object__275a5dc
                                (lVar7,*(undefined8 *)puVar5);
              plVar9 = (long *)(param_1 + 0x30);
              *plVar9 = lVar7;
              thunk_FUN_02134474(plVar9,lVar7);
              if (*plVar9 != 0) {
                UnityEngine_Transform__SetParent_43d1e34(*plVar9,*plVar6,0,0);
                if (*plVar9 != 0) {
                  UnityEngine_RectTransform__set_pivot_43cfbf4(0,0x3f800000,*plVar9,0);
                  puVar3 = PTR_DAT_04cb6ab8;
                  puVar1 = PTR_DAT_04ca9ae8;
                  if (*plVar9 != 0) {
                    UnityEngine_RectTransform__set_sizeDelta_43cfa70
                              (0x436e0000,0x43560000,*plVar9,0);
                    lVar7 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(*(undefined8 *)puVar3,0);
                    puVar3 = PTR_DAT_04cab490;
                    if (lVar7 == 0) {
                      if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      lVar7 = Dino_BusSand_App_UiAssets__Sprite_21636c4
                                        (*(undefined8 *)PTR_DAT_04cb6ab0,0);
                      if (lVar7 == 0) {
                        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                        }
                        lVar7 = Dino_BusSand_App_UiAssets__Sprite_21636c4
                                          (*(undefined8 *)PTR_DAT_04cb6aa8,0);
                      }
                    }
                    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
                    lVar8 = *plVar9;
                    if ((uVar10 & 1) == 0) {
                      if ((lVar8 == 0) ||
                         (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0), lVar7 == 0
                         )) goto LAB_0245bba8;
                      plVar9 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                                 (lVar7,*(undefined8 *)PTR_DAT_04cb68a0);
                      if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
                        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab490);
                      }
                      uVar12 = Dino_BusSand_App_UiAssets__Texture_2163a34
                                         (*(undefined8 *)PTR_DAT_04cb6aa8,0);
                      if (plVar9 == (long *)0x0) goto LAB_0245bba8;
                      UnityEngine_UI_RawImage__set_texture_468c7f4(plVar9,uVar12,0);
                      puVar3 = PTR_DAT_04cba440;
                      lVar7 = *(long *)PTR_DAT_04cba440;
                      if (*(int *)(lVar7 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                        lVar7 = *(long *)puVar3;
                      }
                      puVar11 = *(undefined4 **)(lVar7 + 0xb8);
                      UnityEngine_UI_RawImage__set_uvRect_468c8bc
                                (*puVar11,puVar11[1],puVar11[2],puVar11[3],plVar9,0);
                      (**(code **)(*plVar9 + 0x2c8))(plVar9,0,*(undefined8 *)(*plVar9 + 0x2d0));
                      lVar7 = plVar9[0x1b];
                      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      uVar10 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
                      if ((uVar10 & 1) != 0) {
                        (**(code **)(*plVar9 + 0x2a8))
                                  (0x3f800000,0x3f800000,0x3f800000,0,plVar9,
                                   *(undefined8 *)(*plVar9 + 0x2b0));
                      }
                    }
                    else {
                      if (((lVar8 == 0) ||
                          (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0),
                          lVar8 == 0)) ||
                         (plVar9 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                                     (lVar8,*(undefined8 *)PTR_DAT_04cacf98),
                         plVar9 == (long *)0x0)) goto LAB_0245bba8;
                      UnityEngine_UI_Image__set_sprite_44a7258(plVar9,lVar7,0);
                      UnityEngine_UI_Image__set_preserveAspect_44afae0(plVar9,1,0);
                    /* try { // try from 0245ba60 to 0255be43 has its CatchHandler @ 0245ba60
                       catch() { ... } // from try @ 0245ba60 with catch @ 0245ba60
                       catch() { ... } // from try @ 0245c02c with catch @ 0245ba60
                       catch() { ... } // from try @ 0245c070 with catch @ 0245ba60
                       catch() { ... } // from try @ 0245c0bc with catch @ 0245ba60
                       catch() { ... } // from try @ 0245c0d4 with catch @ 0245ba60
                       catch() { ... } // from try @ 0245c138 with catch @ 0245ba60 */
                      (**(code **)(*plVar9 + 0x2c8))(plVar9,0,*(undefined8 *)(*plVar9 + 0x2d0));
                    }
                    if ((*plVar6 != 0) &&
                       (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(*plVar6,0), lVar7 != 0
                       )) {
                      if ((bRam0000000004fa8360 & 1) == 0) {
                        FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
                        bRam0000000004fa8360 = 1;
                      }
                      if (lVar7 != 0) {
                        lVar8 = *(long *)(lVar7 + 0x10);
                        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78
                                    (lVar7,0);
                        }
                        if (pcRam0000000004fa8430 == (code *)0x0) {
                          pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
                        }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*pcRam0000000004fa8430)(lVar8,0);
                        return;
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0245bba8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

