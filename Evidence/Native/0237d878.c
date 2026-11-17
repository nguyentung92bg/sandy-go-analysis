/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$Claim
UnityEngine_RectTransform_o* Dino_BusSand_App_UI_KitAdopt__Claim (UnityEngine_Transform_o* parent, System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitAdopt$$Claim
   UnityEngine_RectTransform_o* Dino_BusSand_App_UI_KitAdopt__Claim (UnityEngine_Transform_o*
   parent, System_String_o* name, const MethodInfo* method); */

long * Dino_BusSand_App_UI_KitAdopt__Claim_227d878(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar2 = PTR_DAT_04cad7b8;
  if ((bRam0000000004f9c12f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4bc0);
    FUN_02132f7c(PTR_DAT_04cb4bd0);
    FUN_02132f7c(PTR_DAT_04cb4bd8);
    FUN_02132f7c(PTR_DAT_04cb4be0);
    FUN_02132f7c(PTR_DAT_04cb4be8);
    FUN_02132f7c(PTR_DAT_04cad7b8);
    FUN_02132f7c(PTR_DAT_04cb4b80);
    FUN_02132f7c(PTR_DAT_04cb4bc8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 0237d91c to 0247d923 has its CatchHandler @ 0237dbc4 */
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cb4bf0);
                    /* try { // try from 0237d930 to 0247d93b has its CatchHandler @ 0237dbb0 */
    FUN_02132f7c(PTR_DAT_04cad758);
                    /* try { // try from 0237d940 to 0247d94b has its CatchHandler @ 0237dbbc */
    bRam0000000004f9c12f = 1;
  }
  lVar5 = *(long *)puVar2;
  uStack_74 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
                    /* try { // try from 0237d954 to 0247d963 has its CatchHandler @ 0237dbac */
  uStack_90 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 0237d968 to 0247d96f has its CatchHandler @ 0237dbb8 */
  if (**(long **)(lVar5 + 0xb8) != 0) {
    if (*(int *)(**(long **)(lVar5 + 0xb8) + 0x18) == 0) {
      return (long *)0x0;
    }
                    /* try { // try from 0237d980 to 0247d983 has its CatchHandler @ 0237db9c */
                    /* try { // try from 0237d984 to 0247d993 has its CatchHandler @ 0237dbc0 */
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 0237d99c to 0247d9ab has its CatchHandler @ 0237dba8 */
    uVar6 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
    if ((uVar6 & 1) != 0) {
      return (long *)0x0;
    }
                    /* try { // try from 0237d9ac to 0247d9bb has its CatchHandler @ 0237dba4 */
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
                    /* try { // try from 0237d9bc to 0247db93 has its CatchHandler @ 0237d5f8 */
      lVar5 = *(long *)puVar2;
    }
    puVar4 = PTR_DAT_04cb4bc8;
    puVar3 = PTR_DAT_04cb4bc0;
    if (**(long **)(lVar5 + 0xb8) != 0) {
      iVar9 = *(int *)(**(long **)(lVar5 + 0xb8) + 0x18);
      do {
        iVar9 = iVar9 + -1;
        if (iVar9 < 0) {
          return (long *)0x0;
        }
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar2;
        }
        if ((**(long **)(lVar5 + 0xb8) == 0) ||
           (lVar5 = System_Collections_Generic_List_object___get_Item_3a81924
                              (**(long **)(lVar5 + 0xb8),iVar9,*(undefined8 *)puVar4), lVar5 == 0))
        goto LAB_0237dd2c;
        uVar11 = *(undefined8 *)(lVar5 + 0x10);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = UnityEngine_Object__op_Equality_43c6f30(param_1,uVar11,0);
        if ((uVar6 & 1) != 0) {
          uStack_74 = 0xffffffff;
          break;
        }
        if (*(long *)(lVar5 + 0x38) == 0) goto LAB_0237dd2c;
        uVar6 = System_Collections_Generic_Dictionary_object__int___TryGetValue_34ab444
                          (*(long *)(lVar5 + 0x38),param_1,&uStack_74,*(undefined8 *)puVar3);
      } while ((uVar6 & 1) == 0);
      System_ValueTuple_int__object____ctor_30e15d8
                (&uStack_88,uStack_74,param_2,*(undefined8 *)PTR_DAT_04cb4bf0);
      if (*(long *)(lVar5 + 0x40) != 0) {
        System_Collections_Generic_Dictionary_ValueTuple_int__object___int___TryGetValue_337c2e4
                  (*(long *)(lVar5 + 0x40),uStack_88,uStack_80,(long)&uStack_90 + 4,
                   *(undefined8 *)PTR_DAT_04cb4bd8);
        if (*(long *)(lVar5 + 0x40) != 0) {
          System_Collections_Generic_Dictionary_ValueTuple_int__object___int___set_Item_337a834
                    (*(long *)(lVar5 + 0x40),uStack_88,uStack_80,uStack_90._4_4_ + 1,
                     *(undefined8 *)PTR_DAT_04cb4be8);
          if (*(long *)(lVar5 + 0x20) != 0) {
            lVar10 = *(long *)(*(long *)(lVar5 + 0x20) + 0x38);
            uStack_a8 = 0;
            uStack_a0 = 0;
            uStack_98 = 0;
            System_ValueTuple_int__object__int____ctor_310192c
                      (&uStack_a8,uStack_74,param_2,uStack_90._4_4_,*(undefined8 *)PTR_DAT_04cad758)
            ;
            if (lVar10 != 0) {
              uStack_68 = uStack_a0;
              uStack_70 = uStack_a8;
              uStack_60 = uStack_98;
              uVar6 = System_Collections_Generic_Dictionary_ValueTuple_int__object__int___int___TryGetValue_3391b90
                                (lVar10,&uStack_70,&uStack_90,*(undefined8 *)PTR_DAT_04cb4bd0);
              if ((uVar6 & 1) == 0) {
                return (long *)0x0;
              }
              lVar10 = *(long *)(lVar5 + 0x30);
              if (lVar10 != 0) {
                if (*(uint *)(lVar10 + 0x18) <= (uint)uStack_90) {
LAB_0237dd30:
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c(uVar6);
                }
                if (*(char *)(lVar10 + (int)(uint)uStack_90 + 0x20) != '\0') {
                  return (long *)0x0;
                }
                lVar10 = *(long *)(lVar5 + 0x28);
                if (lVar10 != 0) {
                  if (*(uint *)(lVar10 + 0x18) <= (uint)uStack_90) goto LAB_0237dd30;
                    /* try { // try from 0237db94 to 0247db97 has its CatchHandler @ 0237dbb4 */
                  plVar8 = *(long **)(lVar10 + (long)(int)(uint)uStack_90 * 8 + 0x20);
                    /* try { // try from 0237db98 to 0247db9b has its CatchHandler @ 0237dba0 */
                  if (plVar8 == (long *)0x0) {
                    /* catch() { ... } // from try @ 0237d968 with catch @ 0237dbb8 */
                    plVar8 = (long *)0x0;
                  }
                  else {
                    /* catch() { ... } // from try @ 0237d980 with catch @ 0237db9c
                       try { // try from 0237db9c to 0247dbdf has its CatchHandler @ 0237d5f8 */
                    /* catch() { ... } // from try @ 0237db98 with catch @ 0237dba0 */
                    /* catch() { ... } // from try @ 0237d9ac with catch @ 0237dba4 */
                    /* catch() { ... } // from try @ 0237d99c with catch @ 0237dba8 */
                    /* catch() { ... } // from try @ 0237d954 with catch @ 0237dbac */
                    /* catch() { ... } // from try @ 0237d930 with catch @ 0237dbb0 */
                    if (*plVar8 != *(long *)PTR_DAT_04cabdb0) {
                      plVar8 = (long *)0x0;
                    }
                  }
                    /* catch() { ... } // from try @ 0237d940 with catch @ 0237dbbc */
                    /* catch() { ... } // from try @ 0237d984 with catch @ 0237dbc0 */
                    /* catch() { ... } // from try @ 0237d91c with catch @ 0237dbc4 */
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar7 = UnityEngine_Object__op_Equality_43c6f30(plVar8,0,0);
                    /* try { // try from 0237dbe0 to 0247dbe3 has its CatchHandler @ 0237dc04 */
                  uVar6 = 0;
                    /* try { // try from 0237dbe4 to 0247dc07 has its CatchHandler @ 0237d5f8 */
                  if ((uVar7 & 1) != 0) {
                    return (long *)0x0;
                  }
                  lVar10 = *(long *)(lVar5 + 0x30);
                  if (lVar10 != 0) {
                    if (*(uint *)(lVar10 + 0x18) <= (uint)uStack_90) goto LAB_0237dd30;
                    lVar5 = *(long *)(lVar5 + 0x38);
                    /* catch() { ... } // from try @ 0237dbe0 with catch @ 0237dc04 */
                    /* try { // try from 0237dc08 to 0247dc0f has its CatchHandler @ 0237dc18 */
                    *(undefined1 *)(lVar10 + (int)(uint)uStack_90 + 0x20) = 1;
                    /* try { // try from 0237dc10 to 0247dc1b has its CatchHandler @ 0237d5f8 */
                    /* catch() { ... } // from try @ 0237dc08 with catch @ 0237dc18 */
                    if (((lVar5 != 0) &&
                        (System_Collections_Generic_Dictionary_object__int___set_Item_34a9908
                                   (lVar5,plVar8,(long)(int)(uint)uStack_90,
                                    *(undefined8 *)PTR_DAT_04cb4be0), plVar8 != (long *)0x0)) &&
                       (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(plVar8,0), lVar5 != 0)
                       ) {
                      UnityEngine_Object__set_name_43c72ec(lVar5,param_2,0);
                      UnityEngine_Transform__SetParent_43d1e34(plVar8,param_1,0,0);
                      UnityEngine_RectTransform__set_pivot_43cfbf4(0x3f000000,0x3f000000,plVar8,0);
                      UnityEngine_RectTransform__set_anchorMax_43cf768
                                (0x3f000000,0x3f000000,plVar8,0);
                      UnityEngine_RectTransform__set_anchorMin_43cf5e4
                                (0x3f000000,0x3f000000,plVar8,0);
                      UnityEngine_RectTransform__set_sizeDelta_43cfa70
                                (0x42c80000,0x42c80000,plVar8,0);
                      FUN_02392004(0);
                      UnityEngine_RectTransform__set_anchoredPosition3D_43cfd78(plVar8,0);
                      FUN_02392048(0);
                      UnityEngine_Transform__set_localRotation_43d156c(plVar8,0);
                      FUN_022996dc(0);
                      UnityEngine_Transform__set_localScale_43d1be0(plVar8,0);
                      lVar5 = UnityEngine_Component__get_gameObject_43bcde8(plVar8,0);
                      if (lVar5 != 0) {
                        uVar6 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar5,0);
                        if ((uVar6 & 1) != 0) {
                          return plVar8;
                        }
                        lVar5 = UnityEngine_Component__get_gameObject_43bcde8(plVar8,0);
                        if (lVar5 != 0) {
                          UnityEngine_GameObject__SetActive_43c1408(lVar5,1,0);
                          return plVar8;
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
    }
  }
LAB_0237dd2c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

