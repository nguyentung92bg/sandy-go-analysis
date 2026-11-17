/* IL2CPP: Dino.BusSand.App.UI.TowerEventPanel.<>c__DisplayClass19_2$$<Move>b__2
void Dino_BusSand_App_UI_TowerEventPanel___c__DisplayClass19_2___Move_b__2 (Dino_BusSand_App_UI_TowerEventPanel___c__DisplayClass19_2_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.TowerEventPanel.<>c__DisplayClass19_2$$<Move>b__2
   void Dino_BusSand_App_UI_TowerEventPanel___c__DisplayClass19_2___Move_b__2
   (Dino_BusSand_App_UI_TowerEventPanel___c__DisplayClass19_2_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_TowerEventPanel___c__DisplayClass19_2___Move_b__2_21c70b8
               (float param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c70a0 with catch @ 022c70c4
                        */
                    /* try { // try from 022c70c8 to 023c70cb has its CatchHandler @ 022c70d4 */
                    /* try { // try from 022c70cc to 023c70d7 has its CatchHandler @ 022c6fcc */
  if ((*(long *)(param_2 + 0x20) == 0) ||
     (lVar3 = *(long *)(*(long *)(param_2 + 0x20) + 0x10), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c70c8 with catch @ 022c70d4
                        */
  iVar9 = *(int *)(param_2 + 0x10);
  iVar8 = *(int *)(param_2 + 0x14);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022c7158 with catch @ 022c70d8
                       catch(type#1 @ 00000000) { ... } // from try @ 022c71a8 with catch @ 022c70d8
                       catch(type#1 @ 00000000) { ... } // from try @ 022c71b8 with catch @ 022c70d8
                        */
  fVar6 = 1.0;
  if (param_1 <= 1.0) {
    fVar6 = param_1;
  }
  fVar7 = 0.0;
  if (0.0 <= param_1) {
    fVar7 = fVar6;
  }
                    /* try { // try from 022c70fc to 023c7107 has its CatchHandler @ 022c718c */
  if ((bRam0000000004f9baf9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9baf9 = 1;
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x50);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(lVar3 + 0x68) != 0) {
    if (*(int *)(*(long *)(lVar3 + 0x68) + 0x18) < 2) {
      return;
    }
    lVar5 = *(long *)(lVar3 + 0x50);
    Dino_BusSand_App_UI_TowerEventPanel__FloorY_21c64b8
              (fVar7 * ((float)iVar8 - (float)iVar9) + (float)iVar9,lVar3);
    if (lVar5 != 0) {
      if ((bRam0000000004fa8a88 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7bc8,0);
        bRam0000000004fa8a88 = 1;
      }
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar3 = *(long *)(lVar5 + 0x10);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
      }
      if (pcRam0000000004fa8ad0 == (code *)0x0) {
        pcRam0000000004fa8ad0 = (code *)FUN_02132f40(&UNK_00e47400);
      }
      (*pcRam0000000004fa8ad0)(lVar3,&stack0xffffffffffffffe8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

