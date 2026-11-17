/* IL2CPP: Dino.BusSand.App.UI.BusIdle$$Update
void Dino_BusSand_App_UI_BusIdle__Update (Dino_BusSand_App_UI_BusIdle_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BusIdle$$Update
   void Dino_BusSand_App_UI_BusIdle__Update (Dino_BusSand_App_UI_BusIdle_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_BusIdle__Update_233cd00(long param_1)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  
  if ((bRam0000000004f9c660 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9c660 = 1;
  }
  fVar4 = *(float *)(param_1 + 0x20);
  fVar3 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  *(float *)(param_1 + 0x20) = fVar4 + fVar3;
  plVar1 = (long *)UnityEngine_Component__get_transform_43bcd18(param_1,0);
  if (plVar1 != (long *)0x0) {
    if (*plVar1 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
      FUN_021335a4(plVar1);
    }
  }
  fVar3 = (float)func_0x049b5320(*(float *)(param_1 + 0x20) * _UNK_00e20188);
                    /* try { // try from 0243cda8 to 0253cdaf has its CatchHandler @ 0243cf20 */
  UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,0,fVar3 * _UNK_00e20178 * _UNK_00e20a74,0)
  ;
  if (plVar1 != (long *)0x0) {
    UnityEngine_Transform__set_localRotation_43d156c(plVar1,0);
    fVar3 = (float)func_0x049b5320(*(float *)(param_1 + 0x20) * _UNK_00e20274);
                    /* try { // try from 0243cde0 to 0253cde7 has its CatchHandler @ 0243cf18 */
                    /* try { // try from 0243cde8 to 0253ce57 has its CatchHandler @ 0243cc74 */
    fStack_2c = fVar3 * _UNK_00e20488 + 1.0;
    fStack_28 = 1.0 - fVar3 * _UNK_00e20488;
    uStack_24 = 0x3f800000;
    if ((bRam0000000004fa8b3e & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7a00,0);
      bRam0000000004fa8b3e = 1;
    }
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[2];
      if (lVar2 != 0) {
        if (pcRam0000000004fa8bf0 == (code *)0x0) {
          pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
        }
        (*pcRam0000000004fa8bf0)(lVar2,&fStack_2c);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

