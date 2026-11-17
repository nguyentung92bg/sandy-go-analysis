/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$Rect
System_Collections_Generic_Dictionary_string__object__o* Dino_BusSand_App_QaPilot_Runner__Rect (Dino_BusSand_App_QaPilot_Runner_o* __this, UnityEngine_Transform_o* t, UnityEngine_Transform_o* panel, float sx, float sy, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$Rect
   System_Collections_Generic_Dictionary_string__object__o* Dino_BusSand_App_QaPilot_Runner__Rect
   (Dino_BusSand_App_QaPilot_Runner_o* __this, UnityEngine_Transform_o* t, UnityEngine_Transform_o*
   panel, float sx, float sy, const MethodInfo* method); */

long Dino_BusSand_App_QaPilot_Runner__Rect_215c83c
               (float param_1,float param_2,long param_3,long *param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((bRam0000000004f9b7fd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabd80);
    FUN_02132f7c(PTR_DAT_04caab38);
    FUN_02132f7c(PTR_DAT_04ca9b50);
    FUN_02132f7c(PTR_DAT_04ca9b08);
                    /* try { // try from 0225c8b4 to 0235c8bb has its CatchHandler @ 0225c948 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 0225c8bc to 0235c907 has its CatchHandler @ 0225c81c */
    FUN_02132f7c(PTR_DAT_04cabda8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04caba98);
    FUN_02132f7c(PTR_DAT_04cabb10);
    FUN_02132f7c(PTR_DAT_04cab3a8);
    FUN_02132f7c(PTR_DAT_04cabe20);
                    /* try { // try from 0225c908 to 0235c90f has its CatchHandler @ 0225c944 */
    FUN_02132f7c(PTR_DAT_04cabe28);
                    /* try { // try from 0225c910 to 0235c963 has its CatchHandler @ 0225c81c */
    FUN_02132f7c(PTR_DAT_04cabbe0);
    FUN_02132f7c(PTR_DAT_04cabe30);
    FUN_02132f7c(PTR_DAT_04cabe38);
    bRam0000000004f9b7fd = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
                    /* catch() { ... } // from try @ 0225c908 with catch @ 0225c944 */
  if (param_4 == (long *)0x0) {
                    /* try { // try from 0225c964 to 0235c987 has its CatchHandler @ 0225c964
                       catch() { ... } // from try @ 0225c964 with catch @ 0225c964
                       catch() { ... } // from try @ 0225c990 with catch @ 0225c964 */
    plVar7 = (long *)0x0;
  }
  else {
                    /* catch() { ... } // from try @ 0225c8b4 with catch @ 0225c948 */
    plVar7 = param_4;
    if (*param_4 != *(long *)PTR_DAT_04cabdb0) {
      plVar7 = (long *)0x0;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(plVar7,0,0);
                    /* try { // try from 0225c988 to 0235c98f has its CatchHandler @ 0225c9ac */
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  if (plVar7 != (long *)0x0) {
                    /* try { // try from 0225c9c8 to 0235ca47 has its CatchHandler @ 0225c9c8
                       catch(type#1 @ 00000000) { ... } // from try @ 0225c9c8 with catch @ 0225c9c8
                       catch(type#1 @ 00000000) { ... } // from try @ 0225ca54 with catch @ 0225c9c8
                       catch(type#1 @ 00000000) { ... } // from try @ 0225ca78 with catch @ 0225c9c8
                       catch(type#1 @ 00000000) { ... } // from try @ 0225caa8 with catch @ 0225c9c8
                       catch(type#1 @ 00000000) { ... } // from try @ 0225caf4 with catch @ 0225c9c8
                        */
    lVar5 = UnityEngine_Component__GetComponentInParent_object__26f9d74
                      (plVar7,*(undefined8 *)PTR_DAT_04cabd80);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
    uVar6 = 0;
    if ((uVar4 & 1) == 0) {
      if (lVar5 == 0) goto LAB_0225ccf8;
      iVar3 = UnityEngine_Canvas__get_renderMode_467f200(lVar5,0);
      if (iVar3 == 0) {
        uVar6 = 0;
      }
      else {
        lVar5 = UnityEngine_Canvas__get_rootCanvas_4680a14(lVar5,0);
        if (lVar5 == 0) goto LAB_0225ccf8;
        uVar6 = UnityEngine_Canvas__get_worldCamera_4680f2c(lVar5,0);
      }
    }
                    /* try { // try from 0225ca48 to 0235ca53 has its CatchHandler @ 0225cacc */
    UnityEngine_RectTransform__GetWorldCorners_43d0720(plVar7,*(undefined8 *)(param_3 + 0x28),0);
    lVar5 = *(long *)(param_3 + 0x28);
    if (lVar5 != 0) {
                    /* try { // try from 0225ca54 to 0235ca67 has its CatchHandler @ 0225c9c8 */
      if (*(int *)(lVar5 + 0x18) != 0) {
        uVar11 = *(undefined4 *)(lVar5 + 0x20);
        fVar12 = *(float *)(lVar5 + 0x24);
                    /* try { // try from 0225ca68 to 0235ca77 has its CatchHandler @ 0225cac4 */
        uVar13 = *(undefined4 *)(lVar5 + 0x28);
        if (*(int *)(*(long *)PTR_DAT_04cabda8 + 0xe4) == 0) {
                    /* try { // try from 0225ca78 to 0235ca97 has its CatchHandler @ 0225c9c8 */
          thunk_FUN_0218fdac();
        }
        fVar8 = (float)UnityEngine_RectTransformUtility__WorldToScreenPoint_467e894
                                 (uVar11,fVar12,uVar13,uVar6,0);
        lVar5 = *(long *)(param_3 + 0x28);
                    /* try { // try from 0225ca98 to 0235caa7 has its CatchHandler @ 0225cac8 */
        if (lVar5 == 0) goto LAB_0225ccf8;
        if (2 < *(uint *)(lVar5 + 0x18)) {
                    /* try { // try from 0225caa8 to 0235cae3 has its CatchHandler @ 0225c9c8 */
          fVar10 = *(float *)(lVar5 + 0x3c);
          fVar9 = (float)UnityEngine_RectTransformUtility__WorldToScreenPoint_467e894
                                   (*(undefined4 *)(lVar5 + 0x38),fVar10,
                                    *(undefined4 *)(lVar5 + 0x40),uVar6,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225ca68 with catch @ 0225cac4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225ca98 with catch @ 0225cac8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225ca48 with catch @ 0225cacc
                        */
          fVar15 = (fVar8 + fVar9) * 0.5;
          iVar3 = UnityEngine_Screen__get_height_436a6c8(0);
                    /* try { // try from 0225cae4 to 0235caf3 has its CatchHandler @ 0225cafc */
          lVar5 = 0;
                    /* try { // try from 0225caf4 to 0235caff has its CatchHandler @ 0225c9c8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225cae4 with catch @ 0225cafc
                        */
                    /* try { // try from 0225cb00 to 0235cb1b has its CatchHandler @ 0225cb00
                       catch() { ... } // from try @ 0225cb00 with catch @ 0225cb00
                       catch() { ... } // from try @ 0225cb20 with catch @ 0225cb00
                       catch() { ... } // from try @ 0225cb54 with catch @ 0225cb00 */
          if ((0.0 <= fVar15) && (fVar14 = (float)iVar3 - (fVar12 + fVar10) * 0.5, 0.0 <= fVar14)) {
            iVar3 = UnityEngine_Screen__get_width_436a6a0(0);
            lVar5 = 0;
            if (fVar15 <= (float)iVar3) {
                    /* try { // try from 0225cb1c to 0235cb1f has its CatchHandler @ 0225cb8c */
                    /* try { // try from 0225cb20 to 0235cb3f has its CatchHandler @ 0225cb00 */
              iVar3 = UnityEngine_Screen__get_height_436a6c8(0);
              lVar5 = 0;
              if (fVar14 <= (float)iVar3) {
                    /* try { // try from 0225cb40 to 0235cb47 has its CatchHandler @ 0225cb7c */
                lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b08);
                    /* try { // try from 0225cb4c to 0235cb53 has its CatchHandler @ 0225cb6c */
                    /* try { // try from 0225cb54 to 0235cba3 has its CatchHandler @ 0225cb00 */
                System_Collections_Generic_Dictionary_object__object____ctor_34b3628
                          (lVar5,*(undefined8 *)PTR_DAT_04ca9b50);
                if ((param_4 == (long *)0x0) ||
                   (uVar6 = UnityEngine_Object__get_name_43c71a4(param_4,0),
                   puVar2 = PTR_DAT_04caab38, lVar5 == 0)) goto LAB_0225ccf8;
                    /* catch() { ... } // from try @ 0225cb4c with catch @ 0225cb6c */
                    /* catch() { ... } // from try @ 0225cb40 with catch @ 0225cb7c */
                    /* catch() { ... } // from try @ 0225cb1c with catch @ 0225cb8c */
                System_Collections_Generic_Dictionary_object__object___Add_34b43a4
                          (lVar5,*(undefined8 *)PTR_DAT_04cabe28,uVar6,
                           *(undefined8 *)PTR_DAT_04caab38);
                if (*(int *)(*(long *)PTR_DAT_04caba98 + 0xe4) == 0) {
                    /* try { // try from 0225cba4 to 0235cbd7 has its CatchHandler @ 0225cba4
                       catch() { ... } // from try @ 0225cba4 with catch @ 0225cba4
                       catch() { ... } // from try @ 0225cbec with catch @ 0225cba4 */
                  thunk_FUN_0218fdac();
                }
                uVar6 = Dino_BusSand_App_QaPilot_Runner__Label_215c6a4(param_4);
                System_Collections_Generic_Dictionary_object__object___Add_34b43a4
                          (lVar5,*(undefined8 *)PTR_DAT_04cabe20,uVar6,*(undefined8 *)puVar2);
                uVar6 = Dino_BusSand_App_QaPilot_Runner__PathOf_215c53c(param_4,param_5);
                    /* try { // try from 0225cbd8 to 0235cbdf has its CatchHandler @ 0225cc14 */
                    /* try { // try from 0225cbe4 to 0235cbeb has its CatchHandler @ 0225cc04 */
                    /* try { // try from 0225cbec to 0235cc27 has its CatchHandler @ 0225cba4 */
                System_Collections_Generic_Dictionary_object__object___Add_34b43a4
                          (lVar5,*(undefined8 *)PTR_DAT_04cabe38,uVar6,*(undefined8 *)puVar2);
                uStack_34 = FUN_0226a3b0(fVar15 * param_1,0);
                puVar1 = PTR_DAT_04ca9ac8;
                    /* catch() { ... } // from try @ 0225cbe4 with catch @ 0225cc04 */
                    /* catch() { ... } // from try @ 0225cbd8 with catch @ 0225cc14 */
                uVar6 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
                System_Collections_Generic_Dictionary_object__object___Add_34b43a4
                          (lVar5,*(undefined8 *)PTR_DAT_04cabb10,uVar6,*(undefined8 *)puVar2);
                uStack_38 = FUN_0226a3b0(fVar14 * param_2,0);
                uVar6 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_38);
                    /* try { // try from 0225cc58 to 0235cc6f has its CatchHandler @ 0225ccd0 */
                System_Collections_Generic_Dictionary_object__object___Add_34b43a4
                          (lVar5,*(undefined8 *)PTR_DAT_04cabbe0,uVar6,*(undefined8 *)puVar2);
                uStack_84 = FUN_0226a3b0(ABS(fVar9 - fVar8) * param_1,0);
                uVar6 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_84);
                System_Collections_Generic_Dictionary_object__object___Add_34b43a4
                          (lVar5,*(undefined8 *)PTR_DAT_04cabe30,uVar6,*(undefined8 *)puVar2);
                uStack_88 = FUN_0226a3b0(ABS(fVar10 - fVar12) * param_2,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0225cc58 with catch @ 0225ccd0
                        */
                uVar6 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_88);
                System_Collections_Generic_Dictionary_object__object___Add_34b43a4
                          (lVar5,*(undefined8 *)PTR_DAT_04cab3a8,uVar6,*(undefined8 *)puVar2);
              }
            }
          }
                    /* try { // try from 0225c990 to 0235c9bf has its CatchHandler @ 0225c964 */
                    /* catch() { ... } // from try @ 0225c988 with catch @ 0225c9ac */
          return lVar5;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
LAB_0225ccf8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

