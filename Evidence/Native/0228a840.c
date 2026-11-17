/* IL2CPP: Dino.BusSand.App.UI.SimpleActivityContinuePanel.<CloseThen>d__14$$MoveNext
bool Dino_BusSand_App_UI_SimpleActivityContinuePanel__CloseThen_d__14__MoveNext (Dino_BusSand_App_UI_SimpleActivityContinuePanel__CloseThen_d__14_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.SimpleActivityContinuePanel.<CloseThen>d__14$$MoveNext
   bool Dino_BusSand_App_UI_SimpleActivityContinuePanel__CloseThen_d__14__MoveNext
   (Dino_BusSand_App_UI_SimpleActivityContinuePanel__CloseThen_d__14_o* __this, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_UI_SimpleActivityContinuePanel__CloseThen_d__14__MoveNext_218a840(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  
                    /* try { // try from 0228a854 to 0238a893 has its CatchHandler @ 0228a854
                       catch() { ... } // from try @ 0228a854 with catch @ 0228a854
                       catch() { ... } // from try @ 0228a898 with catch @ 0228a854 */
  if ((bRam0000000004f9b979 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caca88);
                    /* try { // try from 0228a894 to 0238a897 has its CatchHandler @ 0228a914 */
                    /* try { // try from 0228a898 to 0238a927 has its CatchHandler @ 0228a854 */
    FUN_02132f7c(PTR_DAT_04cada38);
    bRam0000000004f9b979 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) goto LAB_0228a9f4;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) {
LAB_0228a9f4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar1 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar4,*(undefined8 *)PTR_DAT_04cada38,0);
    lVar2 = Dino_BusSand_App_UI_ContinueBottomPanel__AniCloseClip_22bf830(0);
    if (lVar2 != 0) {
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* catch() { ... } // from try @ 0228a894 with catch @ 0228a914 */
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar1,0,0);
      uVar5 = 0;
      if ((uVar3 & 1) != 0) {
        if (lVar1 == 0) goto LAB_0228a9f4;
        uVar5 = UnityEngine_Component__GetComponent_object__26f97e8
                          (lVar1,*(undefined8 *)PTR_DAT_04cada30);
      }
      if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar6 = (float)Dino_BusSand_App_UI_CommerceUi__Play_22a8904(uVar5,lVar2,0);
      if (0.0 < fVar6) {
        uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
        UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(fVar6,uVar5,0);
        *(undefined8 *)(param_1 + 0x18) = uVar5;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar5);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
    }
  }
  Dino_BusSand_App_UI_UIPanel__Close_21f509c(lVar4,0);
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
  }
  return 0;
}

