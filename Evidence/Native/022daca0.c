/* IL2CPP: Dino.BusSand.App.UI.PassportTipsPanel$$OnMask
void Dino_BusSand_App_UI_PassportTipsPanel__OnMask (Dino_BusSand_App_UI_PassportTipsPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportTipsPanel$$OnMask
   void Dino_BusSand_App_UI_PassportTipsPanel__OnMask (Dino_BusSand_App_UI_PassportTipsPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportTipsPanel__OnMask_21daca0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  
  if ((bRam0000000004f9bb77 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9bb77 = 1;
  }
  if ((*(char *)(param_1 + 0x48) == '\0') &&
     (fVar4 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0), puVar1 = PTR_DAT_04cab1e8,
     *(float *)(param_1 + 0x44) <= fVar4 - *(float *)(param_1 + 0x40))) {
    *(undefined1 *)(param_1 + 0x48) = 1;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 022dad18 to 023dad23 has its CatchHandler @ 022dad8c */
    Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cad948,0);
    plVar2 = (long *)(param_1 + 0x38);
    lVar3 = *plVar2;
    *plVar2 = 0;
    thunk_FUN_02134474(plVar2,0);
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022dad68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
      return;
    }
  }
                    /* try { // try from 022dad74 to 023dad77 has its CatchHandler @ 022dad78 */
  return;
}

