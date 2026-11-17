/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$StopHomeQueue
void Dino_BusSand_Cheat_AutoQa__StopHomeQueue (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$StopHomeQueue
   void Dino_BusSand_Cheat_AutoQa__StopHomeQueue (const MethodInfo* method); */

void Dino_BusSand_Cheat_AutoQa__StopHomeQueue_2342264(void)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_04cb9678;
  if ((bRam0000000004f9c69b & 1) == 0) {
                    /* try { // try from 02442288 to 0254228f has its CatchHandler @ 02442578 */
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04cb9680);
                    /* try { // try from 0244229c to 025422a3 has its CatchHandler @ 02442574 */
    FUN_02132f7c(PTR_DAT_04cb9678);
    FUN_02132f7c(PTR_DAT_04cb9688);
    bRam0000000004f9c69b = 1;
  }
  uVar6 = *(undefined8 *)puVar1;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 024422dc to 02542303 has its CatchHandler @ 0244257c */
  plVar2 = (long *)System_Type__GetTypeFromHandle_483f0b4(uVar6,0);
  if (plVar2 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar2 + 0x6d8))
                               (plVar2,*(undefined8 *)PTR_DAT_04cb9688,0x24,
                                *(undefined8 *)(*plVar2 + 0x6e0));
    puVar1 = PTR_DAT_04cb9568;
    if (plVar2 != (long *)0x0) {
      if (*(int *)(*(long *)PTR_DAT_04cb9568 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = Dino_BusSand_Cheat_AutoQa__get_App_2340ed4();
      plVar3 = (long *)(**(code **)(*plVar2 + 0x2e8))(plVar2,uVar6,*(undefined8 *)(*plVar2 + 0x2f0))
      ;
                    /* try { // try from 02442340 to 0254237b has its CatchHandler @ 02442570 */
      if ((plVar3 != (long *)0x0) && (*plVar3 == *(long *)PTR_DAT_04cb9680)) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 0244237c to 02542387 has its CatchHandler @ 0244256c */
        lVar4 = Dino_BusSand_Cheat_AutoQa__get_App_2340ed4();
        if (lVar4 != 0) {
          UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(lVar4,plVar3,0);
          uVar6 = Dino_BusSand_Cheat_AutoQa__get_App_2340ed4();
          if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0),uVar6,0,0);
          }
          uVar5 = System_Type__get_DefaultBinder_484aa88(0);
                    /* WARNING: Could not recover jumptable at 0x048733a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x308))(plVar2,uVar6,0,0,uVar5,0,*(undefined8 *)(*plVar2 + 0x310));
          return;
        }
        goto LAB_024423b0;
      }
    }
    return;
  }
LAB_024423b0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

