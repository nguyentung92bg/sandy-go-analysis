/* IL2CPP: Dino.BusSand.App.BootTrace$$Run
void Dino_BusSand_App_BootTrace__Run (System_String_o* what, System_Action_o* step, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0224e4fc) */
/* IL2CPP: Dino.BusSand.App.BootTrace$$Run
   void Dino_BusSand_App_BootTrace__Run (System_String_o* what, System_Action_o* step, const
   MethodInfo* method); */

void Dino_BusSand_App_BootTrace__Run_214e420(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  
  if ((bRam0000000004f9b7ae & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab240);
    bRam0000000004f9b7ae = 1;
  }
  fVar2 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  if (param_2 != 0) {
    (**(code **)(param_2 + 0x18))(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x28));
    puVar1 = PTR_DAT_04cab240;
    fVar3 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_BootTrace__Add_214e070((fVar3 - fVar2) * 1000.0,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

