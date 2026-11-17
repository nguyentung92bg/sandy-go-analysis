/* IL2CPP: Dino.BusSand.App.SdkConfig$$.ctor
void Dino_BusSand_App_SdkConfig___ctor (Dino_BusSand_App_SdkConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.SdkConfig$$.ctor
   void Dino_BusSand_App_SdkConfig___ctor (Dino_BusSand_App_SdkConfig_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_App_SdkConfig___ctor_215d810(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04ca9c30;
                    /* try { // try from 0225d81c to 0235d823 has its CatchHandler @ 0225d944 */
  if ((bRam0000000004f9b805 & 1) == 0) {
                    /* try { // try from 0225d834 to 0235d84b has its CatchHandler @ 0225d940 */
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9b805 = 1;
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)puVar1;
  thunk_FUN_02134474();
                    /* try { // try from 0225d858 to 0235d85f has its CatchHandler @ 0225d93c */
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)puVar1;
  thunk_FUN_02134474();
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 0225d870 to 0235d8bf has its CatchHandler @ 0225d94c */
  if ((bRam0000000004fa8588 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa8588 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  UnityEngine_Object___ctor_43c663c(param_1,0);
  if (pcRam0000000004fa8590 == (code *)0x0) {
    pcRam0000000004fa8590 = (code *)FUN_02132f40(&UNK_00e3b9b1);
  }
                    /* WARNING: Could not recover jumptable at 0x044c4b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000004fa8590)(param_1);
  return;
}

