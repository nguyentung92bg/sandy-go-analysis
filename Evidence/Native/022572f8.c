/* IL2CPP: Dino.BusSand.App.QaPilot$$Start
void Dino_BusSand_App_QaPilot__Start (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.QaPilot$$Start
   void Dino_BusSand_App_QaPilot__Start (const MethodInfo* method); */

void Dino_BusSand_App_QaPilot__Start_21572f8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uStack_34;
  
  if ((bRam0000000004f9b7e8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cab9b8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab958);
    FUN_02132f7c(PTR_DAT_04cab9c0);
    FUN_02132f7c(PTR_DAT_04cab9c8);
    FUN_02132f7c(PTR_DAT_04cab9d0);
    bRam0000000004f9b7e8 = 1;
  }
  puVar4 = PTR_DAT_04cab9d0;
  puVar3 = PTR_DAT_04cab958;
  puVar2 = PTR_DAT_04caa070;
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 02257398 to 023573a7 has its CatchHandler @ 022573e4 */
  uStack_34 = 0;
                    /* try { // try from 022573a8 to 023573bb has its CatchHandler @ 022572e0 */
  if (cRam0000000004f9b88d == '\0') {
    FUN_02132f7c(PTR_DAT_04cab958);
                    /* try { // try from 022573bc to 023573cb has its CatchHandler @ 02257418 */
    cRam0000000004f9b88d = '\x01';
  }
                    /* try { // try from 022573cc to 023573fb has its CatchHandler @ 022572e0 */
  **(undefined2 **)(*(long *)puVar3 + 0xb8) = 0x101;
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02257398 with catch @ 022573e4
                        */
  UnityEngine_GameObject___ctor_43c20cc(lVar5,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 022573fc to 0235740b has its CatchHandler @ 02257414 */
  UnityEngine_Object__DontDestroyOnLoad_43c8450(lVar5,0);
  puVar3 = PTR_DAT_04cab9c8;
  puVar2 = PTR_DAT_04cab9c0;
  puVar1 = PTR_DAT_04ca9af8;
  if (lVar5 != 0) {
                    /* try { // try from 0225740c to 0235741b has its CatchHandler @ 022572e0 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022573fc with catch @ 02257414
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022573bc with catch @ 02257418
                        */
    UnityEngine_GameObject__AddComponent_object__275a54c(lVar5,*(undefined8 *)PTR_DAT_04cab9b8);
    uStack_34 = 1;
    uVar6 = System_Int32__ToString_482d750(&uStack_34,0);
    uVar7 = Dino_BusSand_App_QaPilot__get_Dir_215673c();
    uVar6 = System_String__Concat_46d30e8(*(undefined8 *)puVar3,uVar6,*(undefined8 *)puVar2,uVar7,0)
    ;
                    /* try { // try from 02257474 to 023574eb has its CatchHandler @ 02257474
                       catch() { ... } // from try @ 02257474 with catch @ 02257474
                       catch() { ... } // from try @ 022574fc with catch @ 02257474
                       catch() { ... } // from try @ 02257534 with catch @ 02257474
                       catch() { ... } // from try @ 02257588 with catch @ 02257474
                       catch() { ... } // from try @ 02257608 with catch @ 02257474 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    UnityEngine_Debug__Log_4360fc8(uVar6,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

