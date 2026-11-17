/* IL2CPP: Dino.BusSand.App.UI.WinPanel.<>c__DisplayClass20_1$$<BuildChestStrip>b__1
void Dino_BusSand_App_UI_WinPanel___c__DisplayClass20_1___BuildChestStrip_b__1 (Dino_BusSand_App_UI_WinPanel___c__DisplayClass20_1_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.WinPanel.<>c__DisplayClass20_1$$<BuildChestStrip>b__1
   void Dino_BusSand_App_UI_WinPanel___c__DisplayClass20_1___BuildChestStrip_b__1
   (Dino_BusSand_App_UI_WinPanel___c__DisplayClass20_1_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_WinPanel___c__DisplayClass20_1___BuildChestStrip_b__1_2314c98(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000004f9c566 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c566 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar1 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar2 != 0)) {
      if ((bRam0000000004fa8a8a & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7bc8,0);
        bRam0000000004fa8a8a = 1;
      }
      if (lVar2 != 0) {
        lVar2 = *(long *)(lVar2 + 0x10);
        if (lVar2 != 0) {
          if (pcRam0000000004fa8ae0 == (code *)0x0) {
            pcRam0000000004fa8ae0 = (code *)FUN_02132f40(&UNK_00e51f73);
          }
          (*pcRam0000000004fa8ae0)(lVar2,&stack0xffffffffffffffe8);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

