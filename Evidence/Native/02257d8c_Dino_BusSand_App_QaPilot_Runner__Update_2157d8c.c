/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$Update
void Dino_BusSand_App_QaPilot_Runner__Update (Dino_BusSand_App_QaPilot_Runner_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$Update
   void Dino_BusSand_App_QaPilot_Runner__Update (Dino_BusSand_App_QaPilot_Runner_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_QaPilot_Runner__Update_2157d8c(long param_1)

{
  float fVar1;
  
  fVar1 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  Dino_BusSand_App_QaPilot_Runner__TrackResult_2157f18(param_1);
  if (*(float *)(param_1 + 0x40) <= fVar1) {
    *(float *)(param_1 + 0x40) = fVar1 + _UNK_00e20390;
    Dino_BusSand_App_QaPilot_Runner__Poll_2158188(param_1);
  }
  Dino_BusSand_App_QaPilot_Runner__Play_215855c(fVar1,param_1);
  if (*(float *)(param_1 + 0x44) <= fVar1) {
    *(float *)(param_1 + 0x44) = fVar1 + 0.5;
    Dino_BusSand_App_QaPilot_Runner__WriteState_21588b0(param_1);
  }
  return;
}

