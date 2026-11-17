/* IL2CPP: Dino.BusSand.Core.StageEngine$$TickInto
void Dino_BusSand_Core_StageEngine__TickInto (Dino_BusSand_Core_StageEngine_o* __this, System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$TickInto
   void Dino_BusSand_Core_StageEngine__TickInto (Dino_BusSand_Core_StageEngine_o* __this,
   System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method); */

void Dino_BusSand_Core_StageEngine__TickInto_2424f0c(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000004f9cba4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbede0);
    FUN_02132f7c(PTR_DAT_04cb58d0);
    FUN_02132f7c(PTR_DAT_04cbc508);
    FUN_02132f7c(PTR_DAT_04cbc510);
    bRam0000000004f9cba4 = 1;
  }
  if (*(char *)(param_1 + 0x80) != '\0') {
    return;
  }
  *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
  if (*(long *)(param_1 + 0x18) != 0) {
    Dino_BusSand_Core_SandGrid__Step_2417d04();
    if ((0 < *(int *)(param_1 + 0xec)) && (*(char *)(param_1 + 0xf4) == '\0')) {
      Dino_BusSand_Core_StageEngine__CheckEndSuction_242539c(param_1);
    }
    if ((param_2 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
      iVar9 = *(int *)(param_2 + 0x18);
      Dino_BusSand_Core_Road__Advance_2412c60
                (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x78),
                 *(undefined8 *)(param_1 + 0x18),param_2,0);
      puVar4 = PTR_DAT_04cbede0;
      puVar3 = PTR_DAT_04cbc510;
      puVar2 = PTR_DAT_04cb58d0;
      if (iVar9 < *(int *)(param_2 + 0x18)) {
        do {
          System_Collections_Generic_List_SimEvent___get_Item_3abf900
                    (&uStack_80,param_2,iVar9,*(undefined8 *)puVar3);
          if ((int)uStack_80 == 0xb) {
            *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x78);
            Dino_BusSand_Core_StageEngine__CheckColorsCleared_2425418(param_1,param_2);
          }
          else if ((int)uStack_80 == 9) {
            if (*(long *)(param_1 + 0x90) == 0) goto LAB_025251c0;
            uVar5 = uStack_80._4_4_;
            uVar6 = System_Collections_Generic_Dictionary_int__long___Remove_3435080
                              (*(long *)(param_1 + 0x90),uStack_80._4_4_,*(undefined8 *)puVar4);
            if ((uVar6 & 1) != 0) {
              uStack_88 = 0;
              uStack_98 = CONCAT44(uVar5,3);
              thunk_FUN_02134474(&uStack_88,0);
              lVar7 = *(long *)(param_2 + 0x10);
              lVar8 = *(long *)puVar2;
              *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
              if (lVar7 == 0) goto LAB_025251c0;
              uVar1 = *(uint *)(param_2 + 0x18);
              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                lVar7 = lVar7 + (long)(int)uVar1 * 0x18;
                *(uint *)(param_2 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar7 + 0x30) = uStack_88;
                *(undefined8 *)(lVar7 + 0x28) = 0;
                *(undefined8 *)(lVar7 + 0x20) = uStack_98;
                thunk_FUN_02134474((undefined8 *)(lVar7 + 0x30),0);
              }
              else {
                uStack_78 = 0;
                uStack_80 = uStack_98;
                uStack_70 = uStack_88;
                System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                          (param_2,&uStack_80,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(param_2 + 0x18));
      }
      Dino_BusSand_Core_StageEngine__CheckDunes_24255d0(param_1,param_2);
      Dino_BusSand_Core_StageEngine__TickRescueTimer_2425878(param_1,param_2);
      if (*(char *)(param_1 + 0x80) != '\0') {
        return;
      }
      Dino_BusSand_Core_StageEngine__ExpireExits_24258e0(param_1,param_2);
      if ((*(char *)(param_1 + 0x108) != '\0') &&
         (lVar7 = *(long *)(param_1 + 0x78) * -0x3333333333333333,
         (lVar7 + 0x1999999999999998U >> 1 | lVar7 << 0x3f) < 0x1999999999999999)) {
                    /* try { // try from 02525164 to 0262516b has its CatchHandler @ 0252528c */
                    /* try { // try from 0252516c to 026252a7 has its CatchHandler @ 02524fe8 */
        Dino_BusSand_Core_StageEngine__TrySweep_2425d50(param_1,param_2,0);
      }
      Dino_BusSand_Core_StageEngine__EmitFromGarages_24231b8(param_1,param_2);
      Dino_BusSand_Core_StageEngine__EvaluateTermination_2426550(param_1,param_2);
      Dino_BusSand_Core_StageEngine__CheckSoftLock_24267e8(param_1,param_2);
      Dino_BusSand_Core_StageEngine__RefreshHiddenReveals_2423348(param_1,param_2);
      return;
    }
  }
LAB_025251c0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

