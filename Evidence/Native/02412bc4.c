/* IL2CPP: Dino.BusSand.App.UI.WinPanel$$BuildChestStrip
void Dino_BusSand_App_UI_WinPanel__BuildChestStrip (Dino_BusSand_App_UI_WinPanel_o* __this, UnityEngine_RectTransform_o* box, float centreY, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.WinPanel$$BuildChestStrip
   void Dino_BusSand_App_UI_WinPanel__BuildChestStrip (Dino_BusSand_App_UI_WinPanel_o* __this,
   UnityEngine_RectTransform_o* box, float centreY, const MethodInfo* method); */

void Dino_BusSand_App_UI_WinPanel__BuildChestStrip_2312bc4
               (undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  int *piVar17;
  int *piVar18;
  long *plVar19;
  undefined8 *puVar20;
  long *plVar21;
  float fVar22;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar3 = PTR_DAT_04cb8338;
  if ((bRam0000000004f9c553 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caf410);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cac878);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cb8340);
    FUN_02132f7c(PTR_DAT_04cb8338);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04caf368);
    FUN_02132f7c(PTR_DAT_04caf370);
    FUN_02132f7c(PTR_DAT_04caf5e8);
    FUN_02132f7c(PTR_DAT_04caf398);
    FUN_02132f7c(PTR_DAT_04cabd10);
    FUN_02132f7c(PTR_DAT_04caf3b0);
    FUN_02132f7c(PTR_DAT_04caf3c8);
    FUN_02132f7c(PTR_DAT_04cb8348);
    FUN_02132f7c(PTR_DAT_04caf330);
    FUN_02132f7c(PTR_DAT_04cb1eb8);
    bRam0000000004f9c553 = 1;
  }
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Object___ctor_4870e5c(lVar10,0);
  if (lVar10 != 0) {
    *(undefined8 *)(lVar10 + 0x28) = param_2;
    thunk_FUN_02134474((undefined8 *)(lVar10 + 0x28),param_2);
    iVar8 = Dino_BusSand_App_Meta_WinChest__get_Need_220d790(0);
    piVar17 = (int *)(lVar10 + 0x20);
    *piVar17 = iVar8;
    uVar9 = Dino_BusSand_App_Meta_WinChest__get_Progress_220d828(0);
    *(undefined4 *)(lVar10 + 0x24) = uVar9;
    if (cRam0000000004f9c609 == '\0') {
      FUN_02132f7c(PTR_DAT_04cb21c0);
      cRam0000000004f9c609 = '\x01';
    }
    puVar3 = PTR_DAT_04cad330;
    iVar8 = *(int *)(lVar10 + 0x24);
    if (**(char **)(*(long *)PTR_DAT_04cb21c0 + 0xb8) != '\0') {
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar8 = System_Math__Max_4830fc8(0,iVar8 + -1,0);
    }
    puVar7 = PTR_DAT_04cb8348;
    puVar6 = PTR_DAT_04cb1eb8;
    puVar5 = PTR_DAT_04caf410;
    puVar4 = PTR_DAT_04caf330;
    iVar1 = *(int *)(*(long *)puVar3 + 0xe4);
    piVar18 = (int *)(lVar10 + 0x1c);
    *piVar18 = iVar8;
    if (iVar1 == 0) {
      thunk_FUN_0218fdac();
    }
    uVar11 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                       (0x442f0000,0x43020000,0,0,param_3,*(undefined8 *)puVar6,0,0,0);
    Dino_BusSand_App_UI_KitParts__AtTop_object__27db09c(param_1,0,uVar11,*(undefined8 *)puVar5);
    lVar12 = Dino_BusSand_App_UI_UiKit__Img_228203c
                       (0x43160000,0x430c0000,0xc3860000,0x40800000,0x3f800000,uVar11,
                        *(undefined8 *)puVar4,*(undefined8 *)puVar7,0,0);
    plVar19 = (long *)(lVar10 + 0x38);
    *plVar19 = lVar12;
    thunk_FUN_02134474(plVar19,lVar12);
    puVar6 = PTR_DAT_04caf3c8;
    puVar5 = PTR_DAT_04caf3b0;
    puVar4 = PTR_DAT_04caf370;
    puVar3 = PTR_DAT_04caf368;
    if (*plVar19 != 0) {
      UnityEngine_UI_Image__set_preserveAspect_44afae0(*plVar19,1,0);
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uVar13 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                         (0x43eb0000,0x42aa0000,0x42800000,0xc0c00000,_UNK_00e2096c,uVar11,
                          *(undefined8 *)puVar4,*(undefined8 *)puVar3,&uStack_88,0);
      if (cRam0000000004f9b948 == '\0') {
        FUN_02132f7c(PTR_DAT_04cacfc0);
        cRam0000000004f9b948 = '\x01';
      }
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      lVar12 = Dino_BusSand_App_UI_UiKit__Mirror_2281c4c
                         (0x42480000,0x42800000,**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                          (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],_UNK_00e2069c,
                          uVar13,*(undefined8 *)puVar6,*(undefined8 *)puVar5,&uStack_a0,0);
      plVar21 = (long *)(lVar10 + 0x10);
      *plVar21 = lVar12;
      thunk_FUN_02134474(plVar21,lVar12);
      lVar12 = *plVar21;
      if (lVar12 != 0) {
        UnityEngine_RectTransform__set_pivot_43cfbf4(0,0x3f000000,lVar12,0);
        UnityEngine_RectTransform__set_anchorMax_43cf768(0,0x3f000000,lVar12,0);
        UnityEngine_RectTransform__set_anchorMin_43cf5e4(0,0x3f000000,lVar12,0);
        puVar6 = PTR_DAT_04caf5e8;
        puVar5 = PTR_DAT_04caf398;
        puVar4 = PTR_DAT_04cac878;
        puVar3 = PTR_DAT_04cabd10;
        if (*plVar21 != 0) {
          UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(0x41500000,0x3f000000,*plVar21,0);
          uVar14 = System_Int32__ToString_482d750(piVar18,0);
          uVar15 = System_Int32__ToString_482d750(piVar17,0);
          uVar14 = System_String__Concat_46d2b84(uVar14,*(undefined8 *)puVar3,uVar15,0);
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_a8 = 0;
          System_Nullable_Color____ctor_2bc9090
                    (0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_b8,*(undefined8 *)puVar4);
          uStack_c0 = uStack_a8;
          uStack_c8 = uStack_b0;
          uStack_d0 = uStack_b8;
                    /* try { // try from 02413084 to 025130df has its CatchHandler @ 02413084
                       catch() { ... } // from try @ 02413084 with catch @ 02413084
                       catch() { ... } // from try @ 02413294 with catch @ 02413084
                       catch() { ... } // from try @ 024132fc with catch @ 02413084
                       catch() { ... } // from try @ 024133a0 with catch @ 02413084
                       catch() { ... } // from try @ 024133ac with catch @ 02413084 */
          uVar13 = Dino_BusSand_App_UI_UiKit__Text_2282314
                             (0x42200000,0x43960000,0x42700000,0,0x3f800000,uVar13,
                              *(undefined8 *)puVar6,uVar14,*(undefined8 *)puVar5,&uStack_d0,0x202,0)
          ;
          puVar20 = (undefined8 *)(lVar10 + 0x30);
          *puVar20 = uVar13;
          thunk_FUN_02134474(puVar20,uVar13);
          *(undefined4 *)(lVar10 + 0x18) = 0x43de0000;
          if (*(long *)(lVar10 + 0x10) != 0) {
            fVar22 = ((float)*piVar18 * 444.0) / (float)*piVar17;
                    /* try { // try from 024130e0 to 025130eb has its CatchHandler @ 024132c8 */
            fVar2 = 50.0;
            if (50.0 <= fVar22) {
              fVar2 = fVar22;
            }
            UnityEngine_RectTransform__set_sizeDelta_43cfa70
                      (fVar2,0x42800000,*(long *)(lVar10 + 0x10),0);
            if ((*plVar21 != 0) &&
               (lVar12 = UnityEngine_Component__get_gameObject_43bcde8(*plVar21,0),
               puVar3 = PTR_DAT_04cad4c0, lVar12 != 0)) {
                    /* try { // try from 02413108 to 02513113 has its CatchHandler @ 024132b8 */
              UnityEngine_GameObject__SetActive_43c1408(lVar12,0 < *piVar18,0);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
                    /* try { // try from 02413138 to 0251314f has its CatchHandler @ 024132cc */
                    /* try { // try from 02413160 to 02513167 has its CatchHandler @ 024132c4 */
              Dino_BusSand_App_UI_UiMotion__Appear_228e0dc
                        (0x3f000000,_UNK_00e20180,_UNK_00e207cc,_UNK_00e205ec,uVar11,0,0,0);
              if (*(int *)(lVar10 + 0x24) == *(int *)(lVar10 + 0x1c)) {
                uVar16 = Dino_BusSand_App_Meta_WinChest__get_Ready_220d8f8(0);
                if ((uVar16 & 1) != 0) {
                  if (*plVar19 == 0) goto LAB_02413244;
                    /* try { // try from 0241318c to 0251318f has its CatchHandler @ 02413298 */
                  uVar11 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(*plVar19,0);
                  Dino_BusSand_App_UI_WinPanel__ChestFull_2313250(param_2,uVar11,*puVar20);
                    /* try { // try from 024131a0 to 025131a7 has its CatchHandler @ 024132b4 */
                }
              }
              else {
                uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                System_Action___ctor_47b5ed0(uVar11,lVar10,*(undefined8 *)PTR_DAT_04cb8340,0);
                    /* try { // try from 024131d4 to 025131db has its CatchHandler @ 02413294 */
                if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                    /* try { // try from 024131ec to 025131ef has its CatchHandler @ 02413298 */
                lVar10 = Dino_BusSand_App_Tween__Delayed_2161264(_UNK_00e208d8,uVar11,0);
                    /* try { // try from 02413200 to 0251320b has its CatchHandler @ 024132bc */
                if ((lVar10 == 0) ||
                   (lVar10 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar10,1,0), lVar10 == 0))
                goto LAB_02413244;
                Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar10,param_2,0);
              }
                    /* try { // try from 02413220 to 02513227 has its CatchHandler @ 024132ac */
              return;
            }
          }
        }
      }
    }
  }
LAB_02413244:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

