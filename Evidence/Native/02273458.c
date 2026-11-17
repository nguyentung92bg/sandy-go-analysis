/* IL2CPP: Dino.BusSand.App.CrashContext$$Key
void Dino_BusSand_App_CrashContext__Key (System_String_o* key, int32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.CrashContext$$Key
   void Dino_BusSand_App_CrashContext__Key (System_String_o* key, int32_t value, const MethodInfo*
   method); */

void Dino_BusSand_App_CrashContext__Key_2173458(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_04cac450;
  uStack_24 = param_2;
  if ((bRam0000000004f9b8b5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac450);
    bRam0000000004f9b8b5 = 1;
  }
                    /* try { // try from 02273494 to 0237349b has its CatchHandler @ 022734e8 */
                    /* try { // try from 0227349c to 023734fb has its CatchHandler @ 02273448 */
  uVar2 = System_Int32__ToString_482d750(&uStack_24,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  Dino_BusSand_App_CrashContext__Key_216f9dc(param_1,uVar2);
  return;
}

