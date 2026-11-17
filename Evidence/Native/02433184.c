/* IL2CPP: Dino.BusSand.App.UI.RevealPanel.<>c__DisplayClass6_0$$<BuildStage>b__1
void Dino_BusSand_App_UI_RevealPanel___c__DisplayClass6_0___BuildStage_b__1 (Dino_BusSand_App_UI_RevealPanel___c__DisplayClass6_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.RevealPanel.<>c__DisplayClass6_0$$<BuildStage>b__1
   void Dino_BusSand_App_UI_RevealPanel___c__DisplayClass6_0___BuildStage_b__1
   (Dino_BusSand_App_UI_RevealPanel___c__DisplayClass6_0_o* __this, const MethodInfo* method); */

long * Dino_BusSand_App_UI_RevealPanel___c__DisplayClass6_0___BuildStage_b__1_2333184(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plStack_28;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 02433194 to 0253319b has its CatchHandler @ 02433338 */
  if ((bRam0000000004f9c62a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9190);
                    /* try { // try from 024331b0 to 025331b3 has its CatchHandler @ 02433324 */
                    /* try { // try from 024331b8 to 025331c7 has its CatchHandler @ 02433334 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c62a = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 024331e4 to 025331ef has its CatchHandler @ 02433328 */
  plVar4 = (long *)UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if (((ulong)plVar4 & 1) != 0) {
                    /* try { // try from 024331fc to 0253326b has its CatchHandler @ 02433330 */
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x18),0),
       lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar6 = *(long *)PTR_DAT_04cb9190;
    puVar7 = *(undefined8 **)(lVar6 + 0x38);
    if (puVar7 == (undefined8 *)0x0) {
      FUN_0216b4cc(lVar6);
      puVar7 = *(undefined8 **)(lVar6 + 0x38);
    }
    uVar8 = *puVar7;
    if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = System_Type__GetTypeFromHandle_483f0b4(uVar8,0);
    plVar4 = (long *)UnityEngine_GameObject__AddComponent_43c0d20(lVar5,uVar8,0);
    lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0216b470(lVar5);
    }
    if (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      uVar3 = FUN_0219428c(lVar5,lVar6);
      if ((uVar3 & 1) == 0) {
        if ((*(ushort *)(lVar6 + 0x135) >> 0xc & 1) == 0) {
          plVar4 = (long *)0x0;
        }
        else {
          if (((((*(byte *)(lVar5 + 0x118) >> 5 & 1) != 0) || (*(char *)(lVar5 + 0x2a) == '\x1e'))
              || (*(char *)(lVar5 + 0x2a) == '\x13')) &&
             ((*(long *)(lVar5 + 0x70) != 0 &&
              (lVar6 = *(long *)(*(long *)(lVar5 + 0x70) + 0x28), lVar6 != 0)))) {
            plStack_28 = (long *)FUN_0217e1c0(plVar4,lVar6);
            if (plStack_28 != (long *)0x0) {
              return plVar4;
            }
            iVar2 = (*(code *)**(undefined8 **)plVar4[2])((undefined8 *)plVar4[2],lVar6,&plStack_28)
            ;
            if (-1 < iVar2) {
              uVar3 = FUN_0217e250(plVar4,lVar6,plStack_28);
              if ((uVar3 & 1) == 0) {
                (**(code **)(*plStack_28 + 0x10))();
                plStack_28 = (long *)FUN_0217e1c0(plVar4,lVar6);
              }
              if (plStack_28 != (long *)0x0) {
                return plVar4;
              }
            }
          }
          if (lRam0000000004faee08 != lVar5) {
            plVar4 = (long *)0x0;
          }
        }
      }
    }
    return plVar4;
  }
  return plVar4;
}

