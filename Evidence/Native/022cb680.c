/* IL2CPP: Dino.BusSand.App.UI.NoAdsUi$$Refresh
void Dino_BusSand_App_UI_NoAdsUi__Refresh (UnityEngine_Transform_o* btn, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.NoAdsUi$$Refresh
   void Dino_BusSand_App_UI_NoAdsUi__Refresh (UnityEngine_Transform_o* btn, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_NoAdsUi__Refresh_21cb680
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022cb690 to 023cb69b has its CatchHandler @ 022cb7c4 */
  if ((bRam0000000004f9bb19 & 1) == 0) {
                    /* try { // try from 022cb6ac to 023cb6b7 has its CatchHandler @ 022cb7b0 */
    FUN_02132f7c(PTR_DAT_04ca9d18);
                    /* try { // try from 022cb6b8 to 023cb6c7 has its CatchHandler @ 022cb7a0 */
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cb00a0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0138);
                    /* try { // try from 022cb6f0 to 023cb6ff has its CatchHandler @ 022cb7b4 */
    FUN_02132f7c(PTR_DAT_04caef10);
                    /* try { // try from 022cb700 to 023cb71f has its CatchHandler @ 022cb79c */
    bRam0000000004f9bb19 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(param_4,0,0);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cb00a0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 022cb740 to 023cb74f has its CatchHandler @ 022cb7b4 */
    lVar6 = Dino_BusSand_App_Meta_NoAdsFeature__get_I_2243704(0);
    if (lVar6 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = Dino_BusSand_App_Meta_NoAdsFeature__ShouldShowHallEntry_2243a30(lVar6,0);
    }
                    /* try { // try from 022cb768 to 023cb76f has its CatchHandler @ 022cb798 */
                    /* try { // try from 022cb770 to 023cb7d7 has its CatchHandler @ 022cb66c */
    if ((param_4 == 0) ||
       (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(param_4,0), lVar6 == 0)) {
LAB_022cb96c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar6,0);
    if ((uVar2 & 1) != (uVar3 & 1)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb768 with catch @ 022cb798
                        */
      lVar6 = UnityEngine_Component__get_gameObject_43bcde8(param_4,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb700 with catch @ 022cb79c
                        */
      if (lVar6 == 0) goto LAB_022cb96c;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb6b8 with catch @ 022cb7a0
                        */
      UnityEngine_GameObject__SetActive_43c1408(lVar6,uVar2 & 1,0);
    }
    if ((uVar2 & 1) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb6ac with catch @ 022cb7b0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb6f0 with catch @ 022cb7b4
                       catch(type#1 @ 00000000) { ... } // from try @ 022cb740 with catch @ 022cb7b4
                        */
      fVar11 = (float)UnityEngine_Transform__get_localScale_43d1b0c(param_4,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb690 with catch @ 022cb7c4
                        */
      if (cRam0000000004f9b65d == '\0') {
                    /* try { // try from 022cb7d8 to 023cb7df has its CatchHandler @ 022cb7e8 */
        FUN_02132f7c(PTR_DAT_04caa208);
                    /* try { // try from 022cb7e0 to 023cb7eb has its CatchHandler @ 022cb66c */
        cRam0000000004f9b65d = '\x01';
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb7d8 with catch @ 022cb7e8
                        */
      puVar1 = PTR_DAT_04caa208;
                    /* try { // try from 022cb7ec to 023cb7ef has its CatchHandler @ 022cb7f8 */
                    /* try { // try from 022cb7f0 to 023cb7fb has its CatchHandler @ 022cb66c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb7ec with catch @ 022cb7f8
                        */
      pfVar7 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb900 with catch @ 022cb7fc
                       catch(type#1 @ 00000000) { ... } // from try @ 022cb970 with catch @ 022cb7fc
                       catch(type#1 @ 00000000) { ... } // from try @ 022cb980 with catch @ 022cb7fc
                        */
                    /* try { // try from 022cb820 to 023cb82b has its CatchHandler @ 022cb954 */
      if ((param_3 - pfVar7[2]) * (param_3 - pfVar7[2]) +
          (fVar11 - *pfVar7) * (fVar11 - *pfVar7) + (param_2 - pfVar7[1]) * (param_2 - pfVar7[1]) <
          _UNK_00e1fea0) {
        if (cRam0000000004f9b65e == '\0') {
                    /* try { // try from 022cb83c to 023cb847 has its CatchHandler @ 022cb940 */
          FUN_02132f7c(PTR_DAT_04caa208);
                    /* try { // try from 022cb848 to 023cb857 has its CatchHandler @ 022cb930 */
          cRam0000000004f9b65e = '\x01';
          pfVar7 = *(float **)(*(long *)puVar1 + 0xb8);
        }
        UnityEngine_Transform__set_localScale_43d1be0(pfVar7[3],pfVar7[4],pfVar7[5],param_4,0);
      }
      lVar6 = UnityEngine_Transform__Find_43d4bec(param_4,*(undefined8 *)PTR_DAT_04caef10,0);
                    /* try { // try from 022cb880 to 023cb88f has its CatchHandler @ 022cb944 */
      lVar9 = *(long *)PTR_DAT_04ca9d18;
                    /* try { // try from 022cb890 to 023cb8af has its CatchHandler @ 022cb92c */
      lVar8 = *(long *)(lVar9 + 0x38);
      if (lVar8 == 0) {
        FUN_0216b4cc(lVar9);
        lVar8 = *(long *)(lVar9 + 0x38);
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0216b470();
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
                    /* try { // try from 022cb8d0 to 023cb8df has its CatchHandler @ 022cb944 */
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0216b470();
      }
      uVar10 = **(undefined8 **)(lVar8 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
                    /* try { // try from 022cb8f8 to 023cb8ff has its CatchHandler @ 022cb928 */
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
      }
                    /* try { // try from 022cb900 to 023cb967 has its CatchHandler @ 022cb7fc */
      uVar10 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cb0138,uVar10,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb8f8 with catch @ 022cb928
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb890 with catch @ 022cb92c
                        */
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cb848 with catch @ 022cb930
                        */
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
      }
      puVar1 = PTR_DAT_04ca9ae8;
      if ((bRam0000000004f9ba6b & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cada48,uVar10,0);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004f9ba6b = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
      if ((uVar5 & 1) == 0) {
        if ((lVar6 == 0) ||
           (lVar6 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                              (lVar6,1,*(undefined8 *)PTR_DAT_04cada48), lVar6 == 0)) {
LAB_022a95f0:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (0 < (int)uVar2) {
          lVar8 = 0;
          do {
            if (uVar2 <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            plVar4 = *(long **)(lVar6 + 0x20 + lVar8 * 8);
            if (plVar4 == (long *)0x0) goto LAB_022a95f0;
            (**(code **)(*plVar4 + 0x518))(plVar4,uVar10,*(undefined8 *)(*plVar4 + 0x520));
            uVar2 = *(uint *)(lVar6 + 0x18);
            lVar8 = lVar8 + 1;
          } while ((int)lVar8 < (int)uVar2);
        }
      }
      return;
    }
  }
                    /* try { // try from 022cb968 to 023cb96f has its CatchHandler @ 022cb978 */
  return;
}

