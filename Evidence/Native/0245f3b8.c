/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$EnsureStyles
void Dino_BusSand_Cheat_CheatManager__EnsureStyles (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$EnsureStyles
   void Dino_BusSand_Cheat_CheatManager__EnsureStyles (Dino_BusSand_Cheat_CheatManager_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__EnsureStyles_235f3b8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  
  if ((bRam0000000004f9c73c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba458);
    FUN_02132f7c(PTR_DAT_04cba540);
    FUN_02132f7c(PTR_DAT_04cba548);
    FUN_02132f7c(PTR_DAT_04cba550);
    bRam0000000004f9c73c = 1;
  }
  plVar8 = (long *)(param_1 + 0x98);
  if (*plVar8 != 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04cba458 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_Cheat_CheatManager__Solid_235fa74
                    (_UNK_00e20a94,_UNK_00e205f8,_UNK_00e20a34,_UNK_00e2067c);
  puVar9 = (undefined8 *)(param_1 + 0xd8);
  *puVar9 = uVar3;
  thunk_FUN_02134474(puVar9,uVar3);
  uVar3 = Dino_BusSand_Cheat_CheatManager__Solid_235fa74
                    (_UNK_00e208cc,_UNK_00e208e8,_UNK_00e206e4,0x3f800000);
  puVar7 = (undefined8 *)(param_1 + 0xe0);
  *puVar7 = uVar3;
  thunk_FUN_02134474(puVar7,uVar3);
  uVar3 = Dino_BusSand_Cheat_CheatManager__Solid_235fa74(0,0,0,_UNK_00e1fdd0);
  puVar6 = (undefined8 *)(param_1 + 0xe8);
  *puVar6 = uVar3;
  thunk_FUN_02134474(puVar6,uVar3);
  if (*(int *)(*(long *)PTR_DAT_04cba548 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = UnityEngine_GUI__get_skin_4407a54(0);
  if (lVar4 != 0) {
    uVar3 = UnityEngine_GUISkin__get_box_440840c(lVar4,0);
    puVar1 = PTR_DAT_04cba540;
    lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cba540);
    UnityEngine_GUIStyle___ctor_4416f28(lVar4,uVar3,0);
    puVar2 = PTR_DAT_04cba550;
    uVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cba550);
    UnityEngine_RectOffset___ctor_43671c0(uVar3,10,10,8,10,0);
    if (lVar4 != 0) {
      UnityEngine_GUIStyle__set_padding_4417218(lVar4,uVar3,0);
      *plVar8 = lVar4;
      thunk_FUN_02134474(plVar8,lVar4);
      if ((*plVar8 != 0) &&
         (lVar4 = UnityEngine_GUIStyle__get_normal_4414238(*plVar8,0), lVar4 != 0)) {
        UnityEngine_GUIStyleState__set_background_44146bc(lVar4,*puVar9,0);
        lVar4 = UnityEngine_GUI__get_skin_4407a54(0);
        if (lVar4 != 0) {
          uVar3 = UnityEngine_GUISkin__get_label_4407f24(lVar4,0);
          lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
          UnityEngine_GUIStyle___ctor_4416f28(lVar4,uVar3,0);
          if (lVar4 != 0) {
            UnityEngine_GUIStyle__set_fontSize_4415914(lVar4,0x12,0);
            UnityEngine_GUIStyle__set_fontStyle_4415ac4(lVar4,1,0);
            plVar8 = (long *)(param_1 + 0xa0);
            *plVar8 = lVar4;
            thunk_FUN_02134474(plVar8,lVar4);
            if ((*plVar8 != 0) &&
               (lVar4 = UnityEngine_GUIStyle__get_normal_4414238(*plVar8,0), lVar4 != 0)) {
              UnityEngine_GUIStyleState__set_textColor_4414288
                        (0x3f800000,_UNK_00e20180,_UNK_00e20590,0x3f800000,lVar4,0);
              lVar4 = UnityEngine_GUI__get_skin_4407a54(0);
              if (lVar4 != 0) {
                uVar3 = UnityEngine_GUISkin__get_label_4407f24(lVar4,0);
                    /* try { // try from 0245f668 to 0255f723 has its CatchHandler @ 0245f668
                       catch() { ... } // from try @ 0245f668 with catch @ 0245f668
                       catch() { ... } // from try @ 0245f754 with catch @ 0245f668
                       catch() { ... } // from try @ 0245f7fc with catch @ 0245f668
                       catch() { ... } // from try @ 0245f860 with catch @ 0245f668
                       catch() { ... } // from try @ 0245f89c with catch @ 0245f668
                       catch() { ... } // from try @ 0245f8c8 with catch @ 0245f668
                       catch() { ... } // from try @ 0245f8ec with catch @ 0245f668
                       catch() { ... } // from try @ 0245f918 with catch @ 0245f668 */
                lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                UnityEngine_GUIStyle___ctor_4416f28(lVar4,uVar3,0);
                if (lVar4 != 0) {
                  UnityEngine_GUIStyle__set_fontSize_4415914(lVar4,0xe,0);
                  UnityEngine_GUIStyle__set_wordWrap_4415140(lVar4,1,0);
                  plVar8 = (long *)(param_1 + 0xa8);
                  *plVar8 = lVar4;
                  thunk_FUN_02134474(plVar8,lVar4);
                  if ((*plVar8 != 0) &&
                     (lVar4 = UnityEngine_GUIStyle__get_normal_4414238(*plVar8,0), lVar4 != 0)) {
                    UnityEngine_GUIStyleState__set_textColor_4414288
                              (_UNK_00e1fea8,_UNK_00e20830,_UNK_00e2038c,0x3f800000,lVar4,0);
                    lVar10 = *plVar8;
                    lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    UnityEngine_GUIStyle___ctor_4416f28(lVar4,lVar10,0);
                    if (lVar4 != 0) {
                      UnityEngine_GUIStyle__set_fontSize_4415914(lVar4,0xc,0);
                    /* try { // try from 0245f724 to 0255f72b has its CatchHandler @ 0245f8cc */
                      plVar8 = (long *)(param_1 + 0xb0);
                      *plVar8 = lVar4;
                      thunk_FUN_02134474(plVar8,lVar4);
                      if ((*plVar8 != 0) &&
                         (lVar4 = UnityEngine_GUIStyle__get_normal_4414238(*plVar8,0), lVar4 != 0))
                      {
                    /* try { // try from 0245f750 to 0255f753 has its CatchHandler @ 0245f874 */
                    /* try { // try from 0245f754 to 0255f7a7 has its CatchHandler @ 0245f668 */
                        UnityEngine_GUIStyleState__set_textColor_4414288
                                  (_UNK_00e20440,_UNK_00e20994,_UNK_00e1fe38,0x3f800000,lVar4,0);
                        lVar4 = UnityEngine_GUI__get_skin_4407a54(0);
                        if (lVar4 != 0) {
                          uVar3 = UnityEngine_GUISkin__get_button_440f0bc(lVar4,0);
                          lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                          UnityEngine_GUIStyle___ctor_4416f28(lVar4,uVar3,0);
                          if (lVar4 != 0) {
                    /* try { // try from 0245f7a8 to 0255f7af has its CatchHandler @ 0245f87c */
                            UnityEngine_GUIStyle__set_fontSize_4415914(lVar4,0xe,0);
                            UnityEngine_GUIStyle__set_wordWrap_4415140(lVar4,1,0);
                            UnityEngine_GUIStyle__set_fixedHeight_441553c
                                      (0x4200000042000000,lVar4,0);
                    /* try { // try from 0245f7d4 to 0255f7d7 has its CatchHandler @ 0245f86c */
                            plVar8 = (long *)(param_1 + 0xb8);
                            *plVar8 = lVar4;
                            thunk_FUN_02134474(plVar8,lVar4);
                            lVar10 = *plVar8;
                            lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* try { // try from 0245f7f8 to 0255f7fb has its CatchHandler @ 0245f868 */
                    /* try { // try from 0245f7fc to 0255f853 has its CatchHandler @ 0245f668 */
                            UnityEngine_GUIStyle___ctor_4416f28(lVar4,lVar10,0);
                            plVar8 = (long *)(param_1 + 0xc0);
                            *plVar8 = lVar4;
                            thunk_FUN_02134474(plVar8,lVar4);
                            if (*plVar8 != 0) {
                              lVar4 = UnityEngine_GUIStyle__get_normal_4414238(*plVar8,0);
                              if (*plVar8 != 0) {
                                lVar10 = UnityEngine_GUIStyle__get_hover_44170e0(*plVar8,0);
                    /* try { // try from 0245f854 to 0255f857 has its CatchHandler @ 0245f878 */
                    /* try { // try from 0245f858 to 0255f85b has its CatchHandler @ 0245f870 */
                                if ((*plVar8 != 0) &&
                                   (lVar5 = UnityEngine_GUIStyle__get_active_4417130(*plVar8,0),
                                   lVar5 != 0)) {
                    /* try { // try from 0245f85c to 0255f85f has its CatchHandler @ 0245f864 */
                                  uVar3 = *puVar7;
                    /* try { // try from 0245f860 to 0255f897 has its CatchHandler @ 0245f668 */
                    /* catch() { ... } // from try @ 0245f85c with catch @ 0245f864 */
                    /* catch() { ... } // from try @ 0245f7f8 with catch @ 0245f868 */
                                  UnityEngine_GUIStyleState__set_background_44146bc(lVar5,uVar3,0);
                    /* catch() { ... } // from try @ 0245f7d4 with catch @ 0245f86c */
                    /* catch() { ... } // from try @ 0245f858 with catch @ 0245f870 */
                    /* catch() { ... } // from try @ 0245f750 with catch @ 0245f874 */
                    /* catch() { ... } // from try @ 0245f854 with catch @ 0245f878 */
                    /* catch() { ... } // from try @ 0245f7a8 with catch @ 0245f87c */
                                  if ((lVar10 != 0) &&
                                     (UnityEngine_GUIStyleState__set_background_44146bc
                                                (lVar10,uVar3,0), lVar4 != 0)) {
                                    UnityEngine_GUIStyleState__set_background_44146bc(lVar4,uVar3,0)
                                    ;
                    /* try { // try from 0245f898 to 0255f89b has its CatchHandler @ 0245f8bc */
                                    if (*plVar8 != 0) {
                    /* try { // try from 0245f89c to 0255f8bf has its CatchHandler @ 0245f668 */
                                      lVar4 = UnityEngine_GUIStyle__get_normal_4414238(*plVar8,0);
                    /* catch() { ... } // from try @ 0245f898 with catch @ 0245f8bc */
                    /* try { // try from 0245f8c0 to 0255f8c7 has its CatchHandler @ 0245f920 */
                    /* try { // try from 0245f8c8 to 0255f8e7 has its CatchHandler @ 0245f668 */
                    /* catch() { ... } // from try @ 0245f724 with catch @ 0245f8cc */
                                      if (((*plVar8 != 0) &&
                                          (lVar10 = UnityEngine_GUIStyle__get_hover_44170e0
                                                              (*plVar8,0), lVar10 != 0)) &&
                                         (UnityEngine_GUIStyleState__set_textColor_4414288
                                                    (0x3f800000,0x3f800000,0x3f800000,0x3f800000,
                                                     lVar10,0), lVar4 != 0)) {
                    /* try { // try from 0245f8e8 to 0255f8eb has its CatchHandler @ 0245f90c */
                    /* try { // try from 0245f8ec to 0255f90f has its CatchHandler @ 0245f668 */
                                        UnityEngine_GUIStyleState__set_textColor_4414288
                                                  (0x3f800000,0x3f800000,0x3f800000,0x3f800000,lVar4
                                                   ,0);
                                        lVar4 = UnityEngine_GUI__get_skin_4407a54(0);
                                        if (lVar4 != 0) {
                                          uVar3 = UnityEngine_GUISkin__get_label_4407f24(lVar4,0);
                    /* catch() { ... } // from try @ 0245f8e8 with catch @ 0245f90c */
                    /* try { // try from 0245f910 to 0255f917 has its CatchHandler @ 0245f920 */
                    /* try { // try from 0245f918 to 0255f923 has its CatchHandler @ 0245f668 */
                                          lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 0245f8c0 with catch @ 0245f920
                       catch() { ... } // from try @ 0245f910 with catch @ 0245f920 */
                                          UnityEngine_GUIStyle___ctor_4416f28(lVar4,uVar3,0);
                                          if (lVar4 != 0) {
                                            UnityEngine_GUIStyle__set_fontSize_4415914(lVar4,0xe,0);
                                            UnityEngine_GUIStyle__set_alignment_4414f90(lVar4,4,0);
                                            uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                                            UnityEngine_RectOffset___ctor_43671c0(uVar3,10,10,5,5,0)
                                            ;
                                            UnityEngine_GUIStyle__set_padding_4417218(lVar4,uVar3,0)
                                            ;
                                            UnityEngine_GUIStyle__set_wordWrap_4415140(lVar4,0,0);
                                            plVar8 = (long *)(param_1 + 200);
                                            *plVar8 = lVar4;
                                            thunk_FUN_02134474(plVar8,lVar4);
                                            if ((*plVar8 != 0) &&
                                               (lVar4 = UnityEngine_GUIStyle__get_normal_4414238
                                                                  (*plVar8,0), lVar4 != 0)) {
                                              UnityEngine_GUIStyleState__set_background_44146bc
                                                        (lVar4,*puVar6,0);
                                              if ((*plVar8 != 0) &&
                                                 (lVar4 = UnityEngine_GUIStyle__get_normal_4414238
                                                                    (*plVar8,0), lVar4 != 0)) {
                                                UnityEngine_GUIStyleState__set_textColor_4414288
                                                          (0x3f800000,0x3f800000,0x3f800000,
                                                           0x3f800000,lVar4,0);
                                                lVar4 = UnityEngine_GUI__get_skin_4407a54(0);
                                                if (lVar4 != 0) {
                                                  uVar3 = UnityEngine_GUISkin__get_textField_4412ecc
                                                                    (lVar4,0);
                                                  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                                                  UnityEngine_GUIStyle___ctor_4416f28(lVar4,uVar3,0)
                                                  ;
                                                  if (lVar4 != 0) {
                                                    UnityEngine_GUIStyle__set_fontSize_4415914
                                                              (lVar4,0xf,0);
                                                    UnityEngine_GUIStyle__set_fixedHeight_441553c
                                                              (0x41e00000,lVar4,0);
                                                    plVar8 = (long *)(param_1 + 0xd0);
                                                    *plVar8 = lVar4;
                                                    if (iRam00000000051c1b10 != 0) {
                                                      FUN_02220bf0(1L << ((ulong)plVar8 >> 0xc &
                                                                         0x3f),
                                                                   ((ulong)plVar8 >> 0x12 & 0x7fff)
                                                                   * 8 + 0x4ff5ae8);
                                                    }
                                                    return;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

