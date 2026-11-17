/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$ClearGroup
void Dino_BusSand_App_Meta_BattleRoyaleRules__ClearGroup (Dino_BusSand_App_Meta_BattleRoyaleData_o* d, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$ClearGroup
   void Dino_BusSand_App_Meta_BattleRoyaleRules__ClearGroup
   (Dino_BusSand_App_Meta_BattleRoyaleData_o* d, const MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleRules__ClearGroup_22224c4(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam0000000004f9bdf1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae240);
    FUN_02132f7c(PTR_DAT_04cad858);
    bRam0000000004f9bdf1 = 1;
  }
  if (param_1 != 0) {
    Dino_BusSand_App_Meta_BattleRoyaleData__EnsureLists_221f420(param_1);
    lVar2 = *(long *)(param_1 + 0x88);
    *(undefined1 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    if (lVar2 != 0) {
      iVar1 = *(int *)(lVar2 + 0x18);
      *(undefined4 *)(lVar2 + 0x18) = 0;
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear_4851dc8(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
      }
      lVar2 = *(long *)(param_1 + 0x90);
      if (lVar2 != 0) {
        lVar3 = *(long *)(param_1 + 0xa0);
        *(undefined4 *)(lVar2 + 0x18) = 0;
        *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x18) = 0;
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

