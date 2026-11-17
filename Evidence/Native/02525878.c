/* IL2CPP: Dino.BusSand.Core.StageEngine$$TickRescueTimer
void Dino_BusSand_Core_StageEngine__TickRescueTimer (Dino_BusSand_Core_StageEngine_o* __this, System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02526950) */
/* IL2CPP: Dino.BusSand.Core.StageEngine$$TickRescueTimer
   void Dino_BusSand_Core_StageEngine__TickRescueTimer (Dino_BusSand_Core_StageEngine_o* __this,
   System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method); */

void Dino_BusSand_Core_StageEngine__TickRescueTimer_2425878(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 auStack_40 [3];
  
                    /* try { // try from 025258b0 to 026258b7 has its CatchHandler @ 02525afc */
  if ((((0 < *(int *)(param_1 + 0xe4)) && (*(char *)(param_1 + 0x80) == '\0')) &&
      (uVar4 = Dino_BusSand_Core_StageEngine__get_FireTruckInLot_24249f4(param_1), (uVar4 & 1) != 0)
      ) && (iVar2 = *(int *)(param_1 + 0xe4) + -1, *(int *)(param_1 + 0xe4) = iVar2, iVar2 == 0)) {
                    /* try { // try from 025258d4 to 026258d7 has its CatchHandler @ 02525ae8 */
                    /* try { // try from 025258d8 to 026258e7 has its CatchHandler @ 02525af8 */
    if ((bRam0000000004f9cbc4 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cb58d0);
      bRam0000000004f9cbc4 = 1;
    }
    *(undefined1 *)(param_1 + 0x80) = 1;
    *(undefined1 *)(param_1 + 0x81) = 0;
    *(undefined4 *)(param_1 + 0x84) = 3;
    puVar3 = PTR_DAT_04cb58d0;
    if (param_2 != 0) {
      auStack_40[0] = 0;
      uStack_50 = 0x300000015;
      uStack_48 = 0;
      thunk_FUN_02134474(auStack_40,0);
      lVar6 = *(long *)puVar3;
      lVar5 = *(long *)(param_2 + 0x10);
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar1 = *(uint *)(param_2 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        lVar5 = lVar5 + (long)(int)uVar1 * 0x18;
        *(uint *)(param_2 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar5 + 0x30) = auStack_40[0];
        *(undefined8 *)(lVar5 + 0x28) = uStack_48;
        *(undefined8 *)(lVar5 + 0x20) = uStack_50;
        thunk_FUN_02134474((undefined8 *)(lVar5 + 0x30),0);
      }
      else {
        System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                  (param_2,&uStack_50,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
    }
    return;
  }
  return;
}

