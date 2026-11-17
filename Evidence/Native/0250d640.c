/* IL2CPP: Dino.BusSand.Core.BoardBuilder.<>c__DisplayClass3_0$$<AssignCapacities>b__0
int32_t Dino_BusSand_Core_BoardBuilder___c__DisplayClass3_0___AssignCapacities_b__0 (Dino_BusSand_Core_BoardBuilder___c__DisplayClass3_0_o* __this, int32_t a, int32_t b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.BoardBuilder.<>c__DisplayClass3_0$$<AssignCapacities>b__0
   int32_t Dino_BusSand_Core_BoardBuilder___c__DisplayClass3_0___AssignCapacities_b__0
   (Dino_BusSand_Core_BoardBuilder___c__DisplayClass3_0_o* __this, int32_t a, int32_t b, const
   MethodInfo* method); */

void Dino_BusSand_Core_BoardBuilder___c__DisplayClass3_0___AssignCapacities_b__0_240d640
               (long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auVar1 [12];
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined1 auStack_40 [12];
  
                    /* try { // try from 0250d664 to 0260d777 has its CatchHandler @ 0250d664
                       catch() { ... } // from try @ 0250d664 with catch @ 0250d664
                       catch() { ... } // from try @ 0250d7a0 with catch @ 0250d664
                       catch() { ... } // from try @ 0250d7cc with catch @ 0250d664
                       catch() { ... } // from try @ 0250d7f8 with catch @ 0250d664
                       catch() { ... } // from try @ 0250d824 with catch @ 0250d664 */
  if ((bRam0000000004f9cb2f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe3f0);
    bRam0000000004f9cb2f = 1;
  }
  puVar2 = PTR_DAT_04cbe3f0;
  plVar8 = *(long **)(param_1 + 0x10);
  auStack_40._8_4_ = 0;
  auStack_40._0_8_ = 0;
  auVar1 = ZEXT812(0);
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04cbe3f0) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0250d6e0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0216b7a4(plVar8,*(long *)PTR_DAT_04cbe3f0,0);
LAB_0250d6e0:
    auStack_40 = (*(code *)*puVar3)(plVar8,param_2,puVar3[1]);
    plVar8 = *(long **)(param_1 + 0x10);
    auVar1 = auStack_40;
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0250d74c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_0216b7a4(plVar8,*(long *)puVar2,0);
LAB_0250d74c:
      uVar4 = (*(code *)*puVar3)(plVar8,param_3,puVar3[1]);
      System_Int32__CompareTo_482d6dc(auStack_40,uVar4,0);
                    /* try { // try from 0250d778 to 0260d77f has its CatchHandler @ 0250d7d8 */
      return;
    }
  }
  auStack_40 = auVar1;
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

