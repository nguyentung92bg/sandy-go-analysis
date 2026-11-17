/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleStartPanel.<WaitAndStart>d__13$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyaleStartPanel__WaitAndStart_d__13__MoveNext (Dino_BusSand_App_UI_BattleRoyaleStartPanel__WaitAndStart_d__13_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleStartPanel.<WaitAndStart>d__13$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyaleStartPanel__WaitAndStart_d__13__MoveNext
   (Dino_BusSand_App_UI_BattleRoyaleStartPanel__WaitAndStart_d__13_o* __this, const MethodInfo*
   method); */

bool Dino_BusSand_App_UI_BattleRoyaleStartPanel__WaitAndStart_d__13__MoveNext_219ad34(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  if ((bRam0000000004f9b9ea & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae4a0);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cae4a8);
    bRam0000000004f9b9ea = 1;
  }
  puVar2 = PTR_DAT_04caca88;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    uVar8 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(uVar8,uVar7,0);
    *(undefined8 *)(param_1 + 0x18) = uVar7;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar7);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    lVar6 = *(long *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x50) = 0;
      *(undefined1 *)(lVar6 + 0x48) = 0;
      thunk_FUN_02134474((undefined8 *)(lVar6 + 0x50),0);
      if (*(long *)(lVar6 + 0x40) != 0) {
        Dino_BusSand_App_Meta_BattleRoyaleCore__StartNewRound_2222184(*(long *)(lVar6 + 0x40),0);
        Dino_BusSand_App_UI_BattleRoyaleHallButton__RefreshIfPresent_218b8b0(0);
        if (*(long *)(lVar6 + 0x38) != 0) {
          plVar3 = (long *)(*(long *)(lVar6 + 0x38) + 0x18);
          lVar5 = *plVar3;
          *plVar3 = 0;
          thunk_FUN_02134474(plVar3,0);
          Dino_BusSand_App_UI_UIPanel__Close_21f509c(lVar6,0);
          if (cRam0000000004f9b94d == '\0') {
            FUN_02132f7c(PTR_DAT_04cad1b0);
            cRam0000000004f9b94d = '\x01';
          }
          puVar2 = PTR_DAT_04cad1b0;
          uVar7 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
          if ((uVar4 & 1) == 0) {
            if (lVar5 != 0) {
              (**(code **)(lVar5 + 0x18))
                        (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
            }
          }
          else {
            if (cRam0000000004f9b94d == '\0') {
              FUN_02132f7c(PTR_DAT_04cad1b0);
              cRam0000000004f9b94d = '\x01';
            }
            if (**(long **)(*(long *)puVar2 + 0xb8) == 0) goto LAB_0229af2c;
            Dino_BusSand_App_UI_UIManager__Open_object__2945314
                      (**(long **)(*(long *)puVar2 + 0xb8),*(undefined8 *)PTR_DAT_04cae4a8,2,lVar5,
                       *(undefined8 *)PTR_DAT_04cae4a0);
          }
          goto LAB_0229af10;
        }
      }
    }
LAB_0229af2c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_0229af10:
  return iVar1 == 0;
}

