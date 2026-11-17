/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton$$SetVisible
void Dino_BusSand_App_UI_YachtRacingHallButton__SetVisible (Dino_BusSand_App_UI_YachtRacingHallButton_o* __this, bool on, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton$$SetVisible
   void Dino_BusSand_App_UI_YachtRacingHallButton__SetVisible
   (Dino_BusSand_App_UI_YachtRacingHallButton_o* __this, bool on, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingHallButton__SetVisible_21e908c
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  
                    /* try { // try from 022e9090 to 023e9127 has its CatchHandler @ 022e9090
                       catch() { ... } // from try @ 022e9090 with catch @ 022e9090
                       catch() { ... } // from try @ 022e9130 with catch @ 022e9090 */
  lVar2 = UnityEngine_Component__get_gameObject_43bcde8(param_4,0);
  if (lVar2 != 0) {
    uVar1 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar2,0);
    if ((uVar1 & 1) != (param_5 & 1)) {
      lVar2 = UnityEngine_Component__get_gameObject_43bcde8(param_4,0);
      if (lVar2 == 0) goto LAB_022e91e8;
      UnityEngine_GameObject__SetActive_43c1408(lVar2,param_5 & 1,0);
    }
    if ((param_5 & 1) == 0) {
      return;
    }
    lVar2 = UnityEngine_Component__get_transform_43bcd18(param_4,0);
    if (lVar2 != 0) {
      fVar4 = (float)UnityEngine_Transform__get_localScale_43d1b0c(lVar2,0);
      if (cRam0000000004f9b65d == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
                    /* try { // try from 022e9128 to 023e912f has its CatchHandler @ 022e918c */
        cRam0000000004f9b65d = '\x01';
      }
                    /* try { // try from 022e9130 to 023e91bb has its CatchHandler @ 022e9090 */
      pfVar3 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
      if (_UNK_00e1fea0 <=
          (param_3 - pfVar3[2]) * (param_3 - pfVar3[2]) +
          (fVar4 - *pfVar3) * (fVar4 - *pfVar3) + (param_2 - pfVar3[1]) * (param_2 - pfVar3[1])) {
        return;
      }
      lVar2 = UnityEngine_Component__get_transform_43bcd18(param_4,0);
                    /* catch() { ... } // from try @ 022e9128 with catch @ 022e918c */
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
      if (lVar2 != 0) {
        if ((bRam0000000004fa8b3e & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7a00,0);
          bRam0000000004fa8b3e = 1;
        }
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar2 = *(long *)(lVar2 + 0x10);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
        }
        if (pcRam0000000004fa8bf0 == (code *)0x0) {
          pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
        }
        (*pcRam0000000004fa8bf0)(lVar2,&stack0xffffffffffffffd4);
        return;
      }
    }
  }
LAB_022e91e8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

