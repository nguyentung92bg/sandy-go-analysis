/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Glow
void Dino_BusSand_App_UI_HomeAtelier__Glow (Dino_BusSand_App_UI_HomeAtelier_o* __this, Dino_BusSand_App_UI_HomeAtelier_Sheet_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Glow
   void Dino_BusSand_App_UI_HomeAtelier__Glow (Dino_BusSand_App_UI_HomeAtelier_o* __this,
   Dino_BusSand_App_UI_HomeAtelier_Sheet_o* s, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeAtelier__Glow_22d999c(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined4 *puVar16;
  float fVar17;
  float fVar19;
  double dVar18;
  undefined8 uVar20;
  undefined1 auStack_ac [4];
  undefined1 auStack_a8 [4];
  int iStack_a4;
  
  puVar8 = PTR_DAT_04cb7018;
  if ((bRam0000000004f9c3e0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cacf98);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cb7020);
    FUN_02132f7c(PTR_DAT_04cb7028);
    FUN_02132f7c(PTR_DAT_04cb7030);
    FUN_02132f7c(PTR_DAT_04cb7038);
    FUN_02132f7c(PTR_DAT_04cb7018);
    FUN_02132f7c(PTR_DAT_04cb7040);
    FUN_02132f7c(PTR_DAT_04cb7048);
    FUN_02132f7c(PTR_DAT_04cb7050);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf2c0);
                    /* try { // try from 023d9aac to 024d9ab3 has its CatchHandler @ 023da014 */
    FUN_02132f7c(PTR_DAT_04caf300);
    FUN_02132f7c(PTR_DAT_04cb7058);
    bRam0000000004f9c3e0 = 1;
  }
                    /* try { // try from 023d9ac4 to 024d9acb has its CatchHandler @ 023d9fb8 */
  iStack_a4 = 0;
  lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar8);
  System_Object___ctor_4870e5c(lVar11,0);
                    /* try { // try from 023d9adc to 024d9adf has its CatchHandler @ 023d9f88 */
  if (lVar11 != 0) {
                    /* try { // try from 023d9ae0 to 024d9aef has its CatchHandler @ 023d9fbc */
    *(long *)(lVar11 + 0x18) = param_1;
    thunk_FUN_02134474((long *)(lVar11 + 0x18),param_1);
    puVar10 = PTR_DAT_04cb7020;
    puVar9 = PTR_DAT_04cac208;
    puVar8 = PTR_DAT_04cac1e8;
    if (param_2 != 0) {
                    /* try { // try from 023d9af8 to 024d9b13 has its CatchHandler @ 023d9f78 */
      fVar17 = *(float *)(param_2 + 0x74) + _UNK_00e1fea8;
                    /* try { // try from 023d9b20 to 024d9b23 has its CatchHandler @ 023d9f60 */
      *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(param_2 + 0x18);
                    /* try { // try from 023d9b28 to 024d9b33 has its CatchHandler @ 023d9f70 */
      *(float *)(param_2 + 0x74) = fVar17;
      thunk_FUN_02134474();
      uVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar9);
      System_Action_float____ctor_35f1448(uVar12,lVar11,*(undefined8 *)puVar10,0);
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar13 = Dino_BusSand_App_Tween__Value_2160f64(_UNK_00e20440,uVar12,0);
                    /* try { // try from 023d9b7c to 024d9b9f has its CatchHandler @ 023d9f6c */
      if ((lVar13 != 0) &&
         (lVar13 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar13,1,0),
         puVar9 = PTR_DAT_04cb7028, puVar8 = PTR_DAT_04caa458, lVar13 != 0)) {
        lVar13 = Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar13,param_1,0);
                    /* try { // try from 023d9ba0 to 024d9bf3 has its CatchHandler @ 023d98bc */
        uVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar8);
        System_Action___ctor_47b5ed0(uVar12,lVar11,*(undefined8 *)puVar9,0);
        puVar8 = PTR_DAT_04cad568;
        if (lVar13 != 0) {
          Dino_BusSand_App_Tween__OnDone_2160edc(lVar13,uVar12,0);
          if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
                    /* try { // try from 023d9bf4 to 024d9bfb has its CatchHandler @ 023da064 */
          if (cRam0000000004f9b94e == '\0') {
            FUN_02132f7c(PTR_DAT_04cad568);
            cRam0000000004f9b94e = '\x01';
          }
                    /* try { // try from 023d9c10 to 024d9c13 has its CatchHandler @ 023d9f8c */
          lVar13 = *(long *)puVar8;
                    /* try { // try from 023d9c14 to 024d9c23 has its CatchHandler @ 023d9fc4 */
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar13 = *(long *)puVar8;
          }
          puVar8 = PTR_DAT_04cab238;
                    /* try { // try from 023d9c2c to 024d9c47 has its CatchHandler @ 023d9fc0 */
          if (**(long **)(lVar13 + 0xb8) != 0) {
            Dino_BusSand_GameAudio__Sparkle_2382d28(**(long **)(lVar13 + 0xb8),0);
          }
          puVar9 = PTR_DAT_04cad330;
                    /* try { // try from 023d9c48 to 024d9cc3 has its CatchHandler @ 023d98bc */
          if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          puVar10 = PTR_DAT_04caf300;
          puVar8 = PTR_DAT_04caf2c0;
          Dino_BusSand_Haptics__Play_2388ed8(1,0);
          uVar20 = *(undefined8 *)(param_1 + 100);
          uVar12 = *(undefined8 *)(param_2 + 0x20);
          fVar17 = (float)((ulong)uVar20 >> 0x20) * 1.7;
          if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
                    /* try { // try from 023d9cc4 to 024d9ccb has its CatchHandler @ 023d9fc8 */
          plVar14 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                                      (CONCAT44(fVar17,(float)uVar20 * 1.7),fVar17,0,0,0x3f800000,
                                       uVar12,*(undefined8 *)puVar10,*(undefined8 *)puVar8,0,0);
          uVar6 = _UNK_00e208e8;
          if (plVar14 != (long *)0x0) {
                    /* try { // try from 023d9cdc to 024d9ce3 has its CatchHandler @ 023d9fa8 */
                    /* try { // try from 023d9cf4 to 024d9cf7 has its CatchHandler @ 023d9f84 */
                    /* try { // try from 023d9cf8 to 024d9d07 has its CatchHandler @ 023d9fb0 */
            (**(code **)(*plVar14 + 0x2a8))
                      (0x3f800000,_UNK_00e20a20,_UNK_00e208e8,0,plVar14,
                       *(undefined8 *)(*plVar14 + 0x2b0));
                    /* try { // try from 023d9d10 to 024d9d1b has its CatchHandler @ 023d9f94 */
            (**(code **)(*plVar14 + 0x2c8))(plVar14,0,*(undefined8 *)(*plVar14 + 0x2d0));
                    /* try { // try from 023d9d20 to 024d9d27 has its CatchHandler @ 023d9f9c */
            UnityEngine_UI_Image__set_preserveAspect_44afae0(plVar14,0,0);
            lVar13 = UnityEngine_Component__get_transform_43bcd18(plVar14,0);
            puVar8 = PTR_DAT_04cb7030;
            if (lVar13 != 0) {
                    /* try { // try from 023d9d38 to 024d9d3b has its CatchHandler @ 023d9f7c */
                    /* try { // try from 023d9d40 to 024d9d4b has its CatchHandler @ 023d9f80 */
              UnityEngine_Transform__SetAsFirstSibling_43d45d8(lVar13,0);
                    /* try { // try from 023d9d4c to 024d9f37 has its CatchHandler @ 023d98bc */
              *(long *)(lVar11 + 0x20) = (long)plVar14;
              thunk_FUN_02134474((long *)(lVar11 + 0x20),plVar14);
              uVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
              System_Action_float____ctor_35f1448(uVar12,lVar11,*(undefined8 *)puVar8,0);
              if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              lVar13 = Dino_BusSand_App_Tween__Value_2160f64(_UNK_00e20170,uVar12,0);
              if ((lVar13 != 0) &&
                 (lVar13 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar13,1,0),
                 puVar8 = PTR_DAT_04cb7038, lVar13 != 0)) {
                lVar13 = Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar13,param_1,0);
                uVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                System_Action___ctor_47b5ed0(uVar12,lVar11,*(undefined8 *)puVar8,0);
                puVar10 = PTR_DAT_04cb7048;
                puVar9 = PTR_DAT_04cb7040;
                puVar8 = PTR_DAT_04cacf98;
                if (lVar13 != 0) {
                  Dino_BusSand_App_Tween__OnDone_2160edc(lVar13,uVar12,0);
                  puVar7 = PTR_DAT_04caa208;
                  fVar5 = _UNK_00e206f8;
                  uVar4 = _UNK_00e204d0;
                  uVar3 = _UNK_00e20180;
                  fVar2 = _UNK_00e20174;
                  fVar1 = _UNK_00e20094;
                  fVar17 = _UNK_00e1ffdc;
                  iStack_a4 = 0;
                  while( true ) {
                    lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb7050);
                    System_Object___ctor_4870e5c(lVar11,0);
                    uVar20 = *(undefined8 *)(param_2 + 0x20);
                    uVar12 = System_Int32__ToString_482d750(&iStack_a4,0);
                    uVar12 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb7058,uVar12,0)
                    ;
                    if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
                      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad330);
                    }
                    lVar13 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                                       (0x42380000,0x42380000,0,0,uVar20,uVar12,0,0,0);
                    if ((lVar13 == 0) ||
                       (lVar15 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0),
                       lVar15 == 0)) break;
                    plVar14 = (long *)UnityEngine_GameObject__AddComponent_object__275a54c
                                                (lVar15,*(undefined8 *)puVar8);
                    uVar12 = Dino_BusSand_App_UI_AtelierArt__get_Twinkle_22da158();
                    if (plVar14 == (long *)0x0) break;
                    /* try { // try from 023d9f38 to 024d9f3b has its CatchHandler @ 023d9fb4 */
                    /* try { // try from 023d9f3c to 024d9f3f has its CatchHandler @ 023d9fac */
                    /* try { // try from 023d9f40 to 024d9f43 has its CatchHandler @ 023d9fa4 */
                    /* try { // try from 023d9f44 to 024d9f47 has its CatchHandler @ 023d9fa0 */
                    UnityEngine_UI_Image__set_sprite_44a7258(plVar14,uVar12,0);
                    /* try { // try from 023d9f48 to 024d9f4b has its CatchHandler @ 023d9f98 */
                    /* try { // try from 023d9f4c to 024d9f4f has its CatchHandler @ 023d9f90 */
                    /* try { // try from 023d9f50 to 024d9f53 has its CatchHandler @ 023d98bc */
                    /* try { // try from 023d9f54 to 024d9f57 has its CatchHandler @ 023d9f74 */
                    /* try { // try from 023d9f58 to 024d9f5b has its CatchHandler @ 023d9f68 */
                    /* try { // try from 023d9f5c to 024d9f5f has its CatchHandler @ 023d9f64 */
                    (**(code **)(*plVar14 + 0x2c8))(plVar14,0,*(undefined8 *)(*plVar14 + 0x2d0));
                    /* catch() { ... } // from try @ 023d9b20 with catch @ 023d9f60
                       try { // try from 023d9f60 to 024d9fe3 has its CatchHandler @ 023d98bc */
                    /* catch() { ... } // from try @ 023d9f5c with catch @ 023d9f64 */
                    /* catch() { ... } // from try @ 023d9f58 with catch @ 023d9f68 */
                    /* catch() { ... } // from try @ 023d9b7c with catch @ 023d9f6c */
                    /* catch() { ... } // from try @ 023d9b28 with catch @ 023d9f70 */
                    /* catch() { ... } // from try @ 023d9f54 with catch @ 023d9f74 */
                    /* catch() { ... } // from try @ 023d9af8 with catch @ 023d9f78 */
                    /* catch() { ... } // from try @ 023d9d38 with catch @ 023d9f7c */
                    /* catch() { ... } // from try @ 023d9d40 with catch @ 023d9f80 */
                    (**(code **)(*plVar14 + 0x2a8))
                              (0x3f800000,uVar4,uVar3,0x3f800000,plVar14,
                               *(undefined8 *)(*plVar14 + 0x2b0));
                    /* catch() { ... } // from try @ 023d9cf4 with catch @ 023d9f84 */
                    /* catch() { ... } // from try @ 023d9adc with catch @ 023d9f88 */
                    /* catch() { ... } // from try @ 023d9c10 with catch @ 023d9f8c */
                    /* catch() { ... } // from try @ 023d9f4c with catch @ 023d9f90 */
                    /* catch() { ... } // from try @ 023d9d10 with catch @ 023d9f94 */
                    /* catch() { ... } // from try @ 023d9f48 with catch @ 023d9f98 */
                    /* catch() { ... } // from try @ 023d9d20 with catch @ 023d9f9c */
                    /* catch() { ... } // from try @ 023d9f44 with catch @ 023d9fa0 */
                    /* catch() { ... } // from try @ 023d9f40 with catch @ 023d9fa4 */
                    /* catch() { ... } // from try @ 023d9cdc with catch @ 023d9fa8 */
                    sincosf((float)iStack_a4 * fVar17 + *(float *)(param_2 + 0x80) * 6.0,auStack_a8,
                            auStack_ac);
                    /* catch() { ... } // from try @ 023d9f3c with catch @ 023d9fac */
                    /* catch() { ... } // from try @ 023d9cf8 with catch @ 023d9fb0 */
                    /* catch() { ... } // from try @ 023d9f38 with catch @ 023d9fb4 */
                    /* catch() { ... } // from try @ 023d9ac4 with catch @ 023d9fb8 */
                    /* catch() { ... } // from try @ 023d9ae0 with catch @ 023d9fbc */
                    /* catch() { ... } // from try @ 023d9c2c with catch @ 023d9fc0 */
                    /* catch() { ... } // from try @ 023d9c14 with catch @ 023d9fc4 */
                    fVar19 = (float)((ulong)*(undefined8 *)(param_1 + 100) >> 0x20) *
                             (float)((ulong)_auStack_ac >> 0x20) * 0.52;
                    /* catch() { ... } // from try @ 023d9cc4 with catch @ 023d9fc8 */
                    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                              (CONCAT44(fVar19,(float)*(undefined8 *)(param_1 + 100) *
                                               (float)_auStack_ac * 0.52),fVar19,lVar13,0);
                    if (cRam0000000004f9b65d == '\0') {
                      FUN_02132f7c(puVar7);
                    /* try { // try from 023d9fe4 to 024d9fe7 has its CatchHandler @ 023da004 */
                      cRam0000000004f9b65d = '\x01';
                    }
                    /* try { // try from 023d9fe8 to 024da007 has its CatchHandler @ 023d98bc */
                    puVar16 = *(undefined4 **)(*(long *)puVar7 + 0xb8);
                    UnityEngine_Transform__set_localScale_43d1be0
                              (*puVar16,puVar16[1],puVar16[2],lVar13,0);
                    /* catch() { ... } // from try @ 023d9fe4 with catch @ 023da004 */
                    if (lVar11 == 0) break;
                    /* try { // try from 023da008 to 024da00f has its CatchHandler @ 023da0b8 */
                    /* try { // try from 023da010 to 024da02f has its CatchHandler @ 023d98bc */
                    *(long *)(lVar11 + 0x10) = lVar13;
                    /* catch() { ... } // from try @ 023d9aac with catch @ 023da014 */
                    thunk_FUN_02134474((long *)(lVar11 + 0x10),lVar13);
                    plVar14 = *(long **)(param_1 + 0xf0);
                    if (plVar14 == (long *)0x0) break;
                    dVar18 = (double)(**(code **)(*plVar14 + 0x1b8))
                                               (plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
                    /* try { // try from 023da030 to 024da033 has its CatchHandler @ 023da054 */
                    /* try { // try from 023da034 to 024da057 has its CatchHandler @ 023d98bc */
                    uVar12 = *(undefined8 *)PTR_DAT_04cac208;
                    *(float *)(lVar11 + 0x18) = (float)dVar18 * fVar5 + fVar1;
                    uVar12 = thunk_FUN_0216e89c(uVar12);
                    /* catch() { ... } // from try @ 023da030 with catch @ 023da054 */
                    /* try { // try from 023da058 to 024da05f has its CatchHandler @ 023da0b8 */
                    System_Action_float____ctor_35f1448(uVar12,lVar11,*(undefined8 *)puVar9,0);
                    /* try { // try from 023da060 to 024da07f has its CatchHandler @ 023d98bc */
                    /* catch() { ... } // from try @ 023d9bf4 with catch @ 023da064 */
                    if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    /* try { // try from 023da080 to 024da083 has its CatchHandler @ 023da0a4 */
                    /* try { // try from 023da084 to 024da0a7 has its CatchHandler @ 023d98bc */
                    lVar13 = Dino_BusSand_App_Tween__Value_2160f64(uVar6,uVar12,0);
                    /* catch() { ... } // from try @ 023da080 with catch @ 023da0a4 */
                    /* try { // try from 023da0a8 to 024da0af has its CatchHandler @ 023da0b8 */
                    /* try { // try from 023da0b0 to 024da0bb has its CatchHandler @ 023d98bc */
                    if (((lVar13 == 0) ||
                        (lVar13 = Dino_BusSand_App_Tween__SetDelay_2160ea8
                                            ((float)iStack_a4 * fVar2,lVar13,0), lVar13 == 0)) ||
                       (lVar13 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar13,1,0),
                       lVar13 == 0)) break;
                    /* catch() { ... } // from try @ 023da008 with catch @ 023da0b8
                       catch() { ... } // from try @ 023da058 with catch @ 023da0b8
                       catch() { ... } // from try @ 023da0a8 with catch @ 023da0b8 */
                    lVar13 = Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar13,param_1,0);
                    uVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                    System_Action___ctor_47b5ed0(uVar12,lVar11,*(undefined8 *)puVar10,0);
                    if (lVar13 == 0) break;
                    Dino_BusSand_App_Tween__OnDone_2160edc(lVar13,uVar12,0);
                    iStack_a4 = iStack_a4 + 1;
                    if (4 < iStack_a4) {
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
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

