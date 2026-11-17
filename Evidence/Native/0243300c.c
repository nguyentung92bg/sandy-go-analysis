/* IL2CPP: Dino.BusSand.App.UI.RevealPanel$$OnTap
void Dino_BusSand_App_UI_RevealPanel__OnTap (Dino_BusSand_App_UI_RevealPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.RevealPanel$$OnTap
   void Dino_BusSand_App_UI_RevealPanel__OnTap (Dino_BusSand_App_UI_RevealPanel_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_RevealPanel__OnTap_233300c(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  float fVar2;
  
  if (((char)param_1[8] == '\0') &&
     (fVar2 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0),
     0.5 <= fVar2 - *(float *)((long)param_1 + 0x44))) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x1c8);
    uVar1 = *(undefined8 *)(*param_1 + 0x1d0);
    *(undefined1 *)(param_1 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x02433058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,uVar1);
    return;
  }
  return;
}

