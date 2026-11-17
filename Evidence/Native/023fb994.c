/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$DisableOpenClip
void Dino_BusSand_App_UI_MainHudPanel__DisableOpenClip (UnityEngine_Transform_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$DisableOpenClip
   void Dino_BusSand_App_UI_MainHudPanel__DisableOpenClip (UnityEngine_Transform_o* t, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_MainHudPanel__DisableOpenClip_22fb994(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 023fb9a0 to 024fb9d7 has its CatchHandler @ 023fbc80 */
  if ((bRam0000000004f9c4a0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04cadf40);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c4a0 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar2 & 1) != 0) {
                    /* try { // try from 023fbac4 to 024fbac7 has its CatchHandler @ 023fbd3c */
                    /* try { // try from 023fbac8 to 024fbacb has its CatchHandler @ 023fbd24 */
                    /* try { // try from 023fbacc to 024fbacf has its CatchHandler @ 023fbd20 */
    return;
  }
                    /* try { // try from 023fba04 to 024fba1f has its CatchHandler @ 023fbc7c */
  if (param_1 != 0) {
    lVar3 = UnityEngine_Component__GetComponent_object__26f97e8
                      (param_1,*(undefined8 *)PTR_DAT_04cada30);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
                    /* try { // try from 023fba40 to 024fba43 has its CatchHandler @ 023fbba8 */
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
                    /* try { // try from 023fba44 to 024fba5f has its CatchHandler @ 023fbc78 */
    if ((uVar2 & 1) != 0) {
      if (lVar3 == 0) goto LAB_023fbad0;
      UnityEngine_Animation__Stop_4334660(lVar3,0);
      UnityEngine_Behaviour__set_enabled_43bc50c(lVar3,0,0);
    }
                    /* try { // try from 023fba6c to 024fba6f has its CatchHandler @ 023fbd9c */
    lVar3 = UnityEngine_Component__GetComponent_object__26f97e8
                      (param_1,*(undefined8 *)PTR_DAT_04cadf40);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
                    /* try { // try from 023fba9c to 024fba9f has its CatchHandler @ 023fbd8c */
                    /* try { // try from 023fbaa0 to 024fbaa3 has its CatchHandler @ 023fbd80 */
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
                    /* try { // try from 023fbaa4 to 024fbaa7 has its CatchHandler @ 023fbd78 */
    if ((uVar2 & 1) == 0) {
      return;
    }
                    /* try { // try from 023fbaa8 to 024fbaab has its CatchHandler @ 023fbd70 */
    if (lVar3 != 0) {
      if ((bRam0000000004fac320 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04d09bf8,0);
        bRam0000000004fac320 = 1;
      }
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar4 = *(long *)(lVar3 + 0x10);
      if (lVar4 != 0) {
        if (pcRam0000000004fac330 == (code *)0x0) {
          pcRam0000000004fac330 = (code *)FUN_02132f40(&UNK_00e648e1);
        }
                    /* WARNING: Could not recover jumptable at 0x0477adbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fac330)(0x3f800000,lVar4);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar3,0);
    }
  }
LAB_023fbad0:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 023fbad0 to 024fbad3 has its CatchHandler @ 023fbd1c */
  FUN_02133224();
}

