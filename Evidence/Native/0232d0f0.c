/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$BindProcess
void Dino_BusSand_App_Meta_ClimbTowerFeature__BindProcess (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, UnityEngine_Transform_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$BindProcess
   void Dino_BusSand_App_Meta_ClimbTowerFeature__BindProcess
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, UnityEngine_Transform_o* t, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_ClimbTowerFeature__BindProcess_222d0f0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 0232d10c to 0242d117 has its CatchHandler @ 0232d190 */
  if ((bRam0000000004f9be48 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caf910);
                    /* try { // try from 0232d130 to 0242d13b has its CatchHandler @ 0232d17c */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabe20);
    FUN_02132f7c(PTR_DAT_04cabd10);
    FUN_02132f7c(PTR_DAT_04cae9d8);
                    /* try { // try from 0232d168 to 0242d16b has its CatchHandler @ 0232d1cc */
    FUN_02132f7c(PTR_DAT_04cb2eb8);
                    /* try { // try from 0232d16c to 0242d16f has its CatchHandler @ 0232d1d4 */
                    /* try { // try from 0232d170 to 0242d173 has its CatchHandler @ 0232d1b0 */
    bRam0000000004f9be48 = 1;
  }
                    /* try { // try from 0232d174 to 0242d177 has its CatchHandler @ 0232d1ac */
                    /* try { // try from 0232d178 to 0242d17b has its CatchHandler @ 0232d1a8 */
  uStack_24 = 0;
                    /* catch() { ... } // from try @ 0232d130 with catch @ 0232d17c
                       try { // try from 0232d17c to 0242d1eb has its CatchHandler @ 0232cdac */
                    /* catch() { ... } // from try @ 0232cfa8 with catch @ 0232d180 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0232cf4c with catch @ 0232d184 */
    thunk_FUN_0218fdac();
  }
                    /* catch() { ... } // from try @ 0232cec8 with catch @ 0232d188 */
                    /* catch() { ... } // from try @ 0232d004 with catch @ 0232d18c */
                    /* catch() { ... } // from try @ 0232d10c with catch @ 0232d190 */
                    /* catch() { ... } // from try @ 0232d0bc with catch @ 0232d194 */
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(param_2,0,0);
                    /* catch() { ... } // from try @ 0232cfdc with catch @ 0232d198 */
  if ((uVar3 & 1) != 0) {
    return;
  }
                    /* catch() { ... } // from try @ 0232cf80 with catch @ 0232d19c */
                    /* catch() { ... } // from try @ 0232cf20 with catch @ 0232d1a0 */
  iVar2 = Dino_BusSand_App_Meta_ClimbTowerFeature__State_222a414(param_1);
                    /* catch() { ... } // from try @ 0232d01c with catch @ 0232d1a4 */
                    /* catch() { ... } // from try @ 0232cff0 with catch @ 0232d1a8
                       catch() { ... } // from try @ 0232d178 with catch @ 0232d1a8 */
  if (iVar2 == 1) {
                    /* catch() { ... } // from try @ 0232cf94 with catch @ 0232d1ac
                       catch() { ... } // from try @ 0232d174 with catch @ 0232d1ac */
                    /* catch() { ... } // from try @ 0232cf38 with catch @ 0232d1b0
                       catch() { ... } // from try @ 0232d170 with catch @ 0232d1b0 */
                    /* catch() { ... } // from try @ 0232d0e8 with catch @ 0232d1b4 */
                    /* catch() { ... } // from try @ 0232d098 with catch @ 0232d1b8 */
                    /* catch() { ... } // from try @ 0232d044 with catch @ 0232d1bc */
    if ((param_2 != 0) &&
       (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(param_2,0), lVar4 != 0)) {
                    /* catch() { ... } // from try @ 0232cfc0 with catch @ 0232d1c0 */
                    /* catch() { ... } // from try @ 0232cf64 with catch @ 0232d1c4 */
                    /* catch() { ... } // from try @ 0232cf00 with catch @ 0232d1c8 */
      UnityEngine_GameObject__SetActive_43c1408(lVar4,1,0);
                    /* catch() { ... } // from try @ 0232d168 with catch @ 0232d1cc */
                    /* catch() { ... } // from try @ 0232cecc with catch @ 0232d1d0 */
                    /* catch() { ... } // from try @ 0232d064 with catch @ 0232d1d4
                       catch() { ... } // from try @ 0232d16c with catch @ 0232d1d4 */
      uVar5 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc
                        (param_2,*(undefined8 *)PTR_DAT_04cb2eb8,0);
                    /* try { // try from 0232d1ec to 0242d203 has its CatchHandler @ 0232d28c */
      lVar4 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)PTR_DAT_04caf910);
      if (lVar4 != 0) {
                    /* try { // try from 0232d204 to 0242d27b has its CatchHandler @ 0232cdac */
        uVar6 = System_Int32__ToString_482d750(lVar4 + 0x10,0);
        uStack_24 = Dino_BusSand_App_Meta_ClimbTowerFeature__NextWinPoint_2229e34
                              (param_1,0xffffffff);
        uVar7 = System_Int32__ToString_482d750(&uStack_24,0);
        uVar6 = System_String__Concat_46d2b84(uVar6,*(undefined8 *)PTR_DAT_04cabd10,uVar7,0);
        Dino_BusSand_App_Meta_ClimbTowerFeature__UiText_222d330(uVar5,uVar6);
        uVar5 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc
                          (param_2,*(undefined8 *)PTR_DAT_04cabe20,0);
        lVar8 = *(long *)PTR_DAT_04ca9d18;
                    /* try { // try from 0232d27c to 0242d28b has its CatchHandler @ 0232d28c */
        lVar4 = *(long *)(lVar8 + 0x38);
        if (lVar4 == 0) {
          FUN_0216b4cc(lVar8);
                    /* catch() { ... } // from try @ 0232d1ec with catch @ 0232d28c
                       catch() { ... } // from try @ 0232d27c with catch @ 0232d28c */
          lVar4 = *(long *)(lVar8 + 0x38);
        }
                    /* try { // try from 0232d290 to 0242d293 has its CatchHandler @ 0232d29c */
        lVar4 = *(long *)(lVar4 + 0x10);
                    /* try { // try from 0232d294 to 0242d29f has its CatchHandler @ 0232cdac */
                    /* catch() { ... } // from try @ 0232d290 with catch @ 0232d29c */
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0216b470();
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar4 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0216b470();
        }
        uVar6 = Dino_BusSand_App_Meta_StreakTowerUtil__L_2251bd4
                          (*(undefined8 *)PTR_DAT_04cae9d8,**(undefined8 **)(lVar4 + 0xb8),0);
        Dino_BusSand_App_Meta_ClimbTowerFeature__UiText_222d330(uVar5,uVar6);
        return;
      }
    }
  }
  else if ((param_2 != 0) &&
          (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(param_2,0), lVar4 != 0)) {
    if ((bRam0000000004fa8360 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
      bRam0000000004fa8360 = 1;
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar8 = *(long *)(lVar4 + 0x10);
    if (lVar8 != 0) {
      if (pcRam0000000004fa8430 == (code *)0x0) {
        pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
      }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000004fa8430)(lVar8,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

