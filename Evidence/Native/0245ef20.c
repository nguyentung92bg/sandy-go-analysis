/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$TickJumpBoxInput
void Dino_BusSand_Cheat_CheatManager__TickJumpBoxInput (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0245f0fc) */
/* WARNING: Removing unreachable block (ram,0x0245f10c) */
/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$TickJumpBoxInput
   void Dino_BusSand_Cheat_CheatManager__TickJumpBoxInput (Dino_BusSand_Cheat_CheatManager_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__TickJumpBoxInput_235ef20(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  ushort auStack_34 [2];
  
  auStack_34[0] = 0;
  if (*(char *)(param_1 + 0x121) != '\0') {
    uVar2 = UnityEngine_Input__GetKeyDown_44302c8(0x1b,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = UnityEngine_Input__GetKeyDown_44302c8(0xd,0);
      if (((uVar2 & 1) != 0) ||
         (uVar2 = UnityEngine_Input__GetKeyDown_44302c8(0x10f,0), (uVar2 & 1) != 0)) {
        lVar5 = *(long *)(param_1 + 0x128);
        *(undefined1 *)(param_1 + 0x121) = 0;
        if ((bRam0000000004f9c769 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cba530);
          FUN_02132f7c(PTR_DAT_04cba538);
          bRam0000000004f9c769 = 1;
        }
        if (lVar5 != 0) {
          uVar4 = System_String__Trim_46d6ee0(lVar5,0);
          System_Int32__TryParse_482de64(uVar4,&stack0xffffffffffffffdc,0);
          Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_1,*(undefined8 *)PTR_DAT_04cba538);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar5 = UnityEngine_Input__get_inputString_4430354(0);
      puVar1 = PTR_DAT_04ca9ac8;
      if (lVar5 == 0) {
LAB_0245f088:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (0 < *(int *)(lVar5 + 0x10)) {
        iVar6 = 0;
        do {
          auStack_34[0] = System_String__get_Chars_46ccb24(lVar5,iVar6,0);
          if (auStack_34[0] == 8) {
            lVar3 = *(long *)(param_1 + 0x128);
            if (lVar3 == 0) goto LAB_0245f088;
            if (0 < *(int *)(lVar3 + 0x10)) {
              uVar4 = System_String__Substring_46d4848(lVar3,0,*(int *)(lVar3 + 0x10) + -1,0);
LAB_0245f064:
              *(undefined8 *)(param_1 + 0x128) = uVar4;
              thunk_FUN_02134474(param_1 + 0x128,uVar4);
            }
          }
          else if (0xfff5 < (ushort)(auStack_34[0] - 0x3a)) {
            lVar3 = *(long *)(param_1 + 0x128);
            if (lVar3 == 0) goto LAB_0245f088;
            if (*(int *)(lVar3 + 0x10) < 6) {
              if (*(int *)(*(long *)(puVar1 + 0x88) + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar4 = System_Char__ToString_47ac098(auStack_34,0);
              uVar4 = System_String__Concat_46c82e0(lVar3,uVar4,0);
              goto LAB_0245f064;
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar5 + 0x10));
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x121) = 0;
    }
  }
  return;
}

