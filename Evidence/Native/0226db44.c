/* IL2CPP: Dino.BusSand.App.CrashContext$$Step
void Dino_BusSand_App_CrashContext__Step (System_String_o* key, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.CrashContext$$Step
   void Dino_BusSand_App_CrashContext__Step (System_String_o* key, System_String_o* value, const
   MethodInfo* method); */

void Dino_BusSand_App_CrashContext__Step_216db44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_04cac450;
                    /* try { // try from 0226db5c to 0236db63 has its CatchHandler @ 0226dc04 */
                    /* try { // try from 0226db64 to 0236db77 has its CatchHandler @ 0226dae0 */
  if ((bRam0000000004f9b8bb & 1) == 0) {
                    /* try { // try from 0226db78 to 0236db83 has its CatchHandler @ 0226dc04 */
    FUN_02132f7c(PTR_DAT_04cac450);
                    /* try { // try from 0226db84 to 0236dc33 has its CatchHandler @ 0226dae0 */
    FUN_02132f7c(PTR_DAT_04cab608);
    FUN_02132f7c(PTR_DAT_04caca40);
    FUN_02132f7c(PTR_DAT_04caba20);
    bRam0000000004f9b8bb = 1;
  }
  lVar4 = *(long *)puVar2;
  uStack_38 = 0;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar4 != 0) {
    uVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (lVar4,param_1,&uStack_38,*(undefined8 *)PTR_DAT_04cab608);
    if (((uVar5 & 1) == 0) ||
       (uVar5 = System_String__op_Equality_46d1108(uStack_38,param_2,0), (uVar5 & 1) == 0)) {
      puVar3 = PTR_DAT_04caca40;
      puVar1 = PTR_DAT_04caba20;
                    /* catch() { ... } // from try @ 0226db14 with catch @ 0226dbfc */
                    /* catch() { ... } // from try @ 0226db5c with catch @ 0226dc04
                       catch() { ... } // from try @ 0226db78 with catch @ 0226dc04 */
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_CrashContext__Key_216f9dc(param_1,param_2);
      System_String__Concat_46d2b84(param_1,*(undefined8 *)puVar3,param_2,0);
      Dino_BusSand_App_CrashContext__Log_216fbd8();
      uVar5 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)puVar1,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_CrashContext__KeepBootOpen_21737b8(param_2);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

