/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$PlayLoop
UnityEngine_AudioSource_o* Dino_BusSand_App_UI_YachtRacingUi__PlayLoop (UnityEngine_GameObject_o* host, System_String_o* clipKey, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$PlayLoop
   UnityEngine_AudioSource_o* Dino_BusSand_App_UI_YachtRacingUi__PlayLoop (UnityEngine_GameObject_o*
   host, System_String_o* clipKey, const MethodInfo* method); */

long Dino_BusSand_App_UI_YachtRacingUi__PlayLoop_21f8914(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022f88b4 with catch @ 022f891c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022f88a8 with catch @ 022f8940
                        */
  if ((bRam0000000004f9bc55 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022f8854 with catch @ 022f8954
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022f8888 with catch @ 022f8958
                        */
    FUN_02132f7c(PTR_DAT_04cab1e8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022f8848 with catch @ 022f895c
                        */
    FUN_02132f7c(PTR_DAT_04cb1840);
    FUN_02132f7c(PTR_DAT_04cb1848);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022f8838 with catch @ 022f8978
                       catch(type#1 @ 00000000) { ... } // from try @ 022f8860 with catch @ 022f8978
                        */
    FUN_02132f7c(PTR_DAT_04cb1850);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* catch() { ... } // from try @ 022f89dc with catch @ 022f898c */
    FUN_02132f7c(PTR_DAT_04cab490);
    bRam0000000004f9bc55 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
                    /* try { // try from 022f89d8 to 023f89db has its CatchHandler @ 022f89ec */
  if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
                    /* try { // try from 022f89dc to 023f89ff has its CatchHandler @ 022f898c */
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_App_Audio__get_SfxOn_214d4f0(0);
  puVar2 = PTR_DAT_04cab1f0;
                    /* catch() { ... } // from try @ 022f89d8 with catch @ 022f89ec */
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (*(int *)(*(long *)PTR_DAT_04cab1f0 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88a == '\0') {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    cRam0000000004f9b88a = '\x01';
  }
  lVar4 = *(long *)puVar2;
                    /* try { // try from 022f8a2c to 023f8a77 has its CatchHandler @ 022f8a2c
                       catch(type#1 @ 00000000) { ... } // from try @ 022f8a2c with catch @ 022f8a2c
                       catch(type#1 @ 00000000) { ... } // from try @ 022f8a9c with catch @ 022f8a2c
                        */
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  lVar4 = **(long **)(lVar4 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
  if ((uVar3 & 1) == 0) {
LAB_022f8b20:
    uVar7 = 0;
    fVar10 = 1.0;
  }
  else {
    if (lVar4 == 0) goto LAB_022f8c30;
                    /* try { // try from 022f8a78 to 023f8a8b has its CatchHandler @ 022f8aec */
    lVar5 = Dino_BusSand_AudioHub__Def_2374858(lVar4,param_2,0);
    puVar2 = PTR_DAT_04cb1850;
                    /* try { // try from 022f8a94 to 023f8a9b has its CatchHandler @ 022f8ae8 */
                    /* try { // try from 022f8a9c to 023f8aff has its CatchHandler @ 022f8a2c */
    if (((lVar5 == 0) || (lVar6 = *(long *)(lVar5 + 0x80), lVar6 == 0)) ||
       (*(int *)(lVar6 + 0x18) < 1)) goto LAB_022f8b20;
    lVar6 = System_Collections_Generic_List_object___get_Item_3a81924
                      (lVar6,0,*(undefined8 *)PTR_DAT_04cb1850);
    if (lVar6 == 0) goto LAB_022f8c30;
    uVar7 = Dino_BusSand_AudioHub__Clip_23742fc(lVar4,*(undefined8 *)(lVar6 + 0x10),0);
    if (*(long *)(lVar5 + 0x80) == 0) goto LAB_022f8c30;
    fVar10 = *(float *)(lVar5 + 0x38);
    lVar4 = System_Collections_Generic_List_object___get_Item_3a81924
                      (*(long *)(lVar5 + 0x80),0,*(undefined8 *)puVar2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022f8a94 with catch @ 022f8ae8
                        */
    if (lVar4 == 0) goto LAB_022f8c30;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022f8a78 with catch @ 022f8aec
                        */
    fVar8 = (float)func_0x049b5300(0x41200000,(fVar10 + *(float *)(lVar4 + 0x20)) / 20.0);
    fVar9 = 1.0;
    if (fVar8 <= 1.0) {
      fVar9 = fVar8;
    }
    fVar10 = 0.0;
    if (0.0 <= fVar8) {
      fVar10 = fVar9;
    }
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = Dino_BusSand_App_UiAssets__Clip_21635b4(param_2,0);
    fVar10 = 1.0;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
  lVar4 = 0;
  if ((uVar3 & 1) == 0) {
    if ((param_1 == 0) ||
       (lVar4 = UnityEngine_GameObject__AddComponent_object__275a54c
                          (param_1,*(undefined8 *)PTR_DAT_04cb1840), lVar4 == 0)) {
LAB_022f8c30:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_AudioSource__set_clip_434875c(lVar4,uVar7,0);
    UnityEngine_AudioSource__set_loop_4348b90(lVar4,1,0);
    UnityEngine_AudioSource__set_playOnAwake_4348c54(lVar4,0,0);
    UnityEngine_AudioSource__set_spatialBlend_4348dec(0,lVar4,0);
    UnityEngine_AudioSource__set_volume_434840c(fVar10,lVar4,0);
    UnityEngine_AudioSource__Play_4348894(lVar4,0);
  }
  return lVar4;
}

