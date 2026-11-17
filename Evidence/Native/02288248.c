/* IL2CPP: Dino.BusSand.App.UI.ActivityQuitFlow$$TryEnterSimple
bool Dino_BusSand_App_UI_ActivityQuitFlow__TryEnterSimple (Dino_BusSand_App_UI_ActivityQuitFlow_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.ActivityQuitFlow$$TryEnterSimple
   bool Dino_BusSand_App_UI_ActivityQuitFlow__TryEnterSimple
   (Dino_BusSand_App_UI_ActivityQuitFlow_o* __this, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_ActivityQuitFlow__TryEnterSimple_2188248
          (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  
  if ((bRam0000000004f9b96a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadaa0);
    FUN_02132f7c(PTR_DAT_04cada88);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caadd0);
    FUN_02132f7c(PTR_DAT_04cadaa8);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cadab0);
    FUN_02132f7c(PTR_DAT_04cadab8);
    bRam0000000004f9b96a = 1;
  }
  puVar1 = PTR_DAT_04cadaa0;
  if (*(char *)(param_4 + 0x34) == '\0') {
    lVar2 = *(long *)PTR_DAT_04cadaa0;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar2 = *(long *)puVar1;
    }
    if (**(char **)(lVar2 + 0xb8) != '\0') {
      lVar6 = *(long *)(param_4 + 0x18);
      if (lVar6 == 0) {
LAB_02288504:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (1 < *(int *)(lVar6 + 0x18)) {
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar2 = Dino_BusSand_App_Meta_ActivityContinueFeature__Influenced_221e450(lVar6,0);
        puVar1 = PTR_DAT_04cadab8;
        if (lVar2 == 0) goto LAB_02288504;
        if (1 < *(int *)(lVar2 + 0x18)) {
          if (*(long *)(param_4 + 0x10) == 0) goto LAB_02288504;
          lVar6 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                            (*(long *)(param_4 + 0x10),*(undefined8 *)PTR_DAT_04cadab8,0);
          if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab490);
          }
          uVar3 = Dino_BusSand_App_UiAssets__Prefab_21513b8(*(undefined8 *)puVar1,0);
          puVar1 = PTR_DAT_04ca9ae8;
                    /* catch() { ... } // from try @ 022884a0 with catch @ 0228839c */
          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
          }
          uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
          if ((uVar4 & 1) == 0) {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
            if ((uVar4 & 1) == 0) {
              Dino_BusSand_App_UI_ActivityQuitFlow__HideAll_2188b58(param_4);
              *(undefined1 *)(param_4 + 0x34) = 1;
              if ((lVar6 != 0) &&
                 (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0), lVar5 != 0)) {
                UnityEngine_GameObject__SetActive_43c1408(lVar5,1,0);
                    /* try { // try from 0228842c to 02388437 has its CatchHandler @ 022884e0 */
                lVar6 = Dino_BusSand_App_UI_ActivityQuitFlow__Spawn_2188ee0(param_4,uVar3,lVar6);
                if (lVar6 != 0) {
                  uVar3 = UnityEngine_GameObject__get_transform_43c1048(lVar6,0);
                  lVar6 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc
                                    (uVar3,*(undefined8 *)PTR_DAT_04cadab0,0);
                  uVar3 = FUN_02133068(*(undefined8 *)PTR_DAT_04caadd0,3);
                    /* try { // try from 02288474 to 0238847f has its CatchHandler @ 022884cc */
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_47720bc
                            (uVar3,*(undefined8 *)PTR_DAT_04cadaa8,0);
                  Dino_BusSand_App_UI_SimpleActivityContinuePanel__FillTiles_21890c8
                            (lVar6,lVar2,uVar3);
                    /* try { // try from 02288494 to 0238849f has its CatchHandler @ 022884c4 */
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 022884a0 to 023884ef has its CatchHandler @ 0228839c */
                    thunk_FUN_0218fdac();
                  }
                  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
                  if (((uVar4 & 1) != 0) && (*(int *)(lVar2 + 0x18) == 4)) {
                    /* catch() { ... } // from try @ 02288494 with catch @ 022884c4 */
                    fVar7 = (float)FUN_022996dc(0);
                    /* catch() { ... } // from try @ 02288474 with catch @ 022884cc */
                    if (lVar6 == 0) goto LAB_02288504;
                    /* catch() { ... } // from try @ 0228842c with catch @ 022884e0 */
                    UnityEngine_Transform__set_localScale_43d1be0
                              (fVar7 * _UNK_00e200f8,param_2 * _UNK_00e200f8,param_3 * _UNK_00e200f8
                               ,lVar6,0);
                  }
                  Dino_BusSand_App_UI_ActivityQuitFlow__ApplyLevelBg_21896b8(param_4,0);
                  return 1;
                }
              }
              goto LAB_02288504;
            }
          }
        }
      }
    }
  }
  return 0;
}

