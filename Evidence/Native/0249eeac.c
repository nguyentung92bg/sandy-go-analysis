/* IL2CPP: Dino.BusSand.View.GameView$$EscapeTicks
int32_t Dino_BusSand_View_GameView__EscapeTicks (Dino_BusSand_View_GameView_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$EscapeTicks
   int32_t Dino_BusSand_View_GameView__EscapeTicks (Dino_BusSand_View_GameView_o* __this, int32_t
   id, const MethodInfo* method); */

int Dino_BusSand_View_GameView__EscapeTicks_239eeac(long param_1,undefined4 param_2)

{
  int iVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fStack_34;
  
  if ((bRam0000000004f9c910 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbb008);
    bRam0000000004f9c910 = 1;
  }
  fStack_34 = 0.0;
  if (*(long *)(param_1 + 0x100) != 0) {
    uVar2 = System_Collections_Generic_Dictionary_int__float___TryGetValue_343fc30
                      (*(long *)(param_1 + 0x100),param_2,&fStack_34,*(undefined8 *)PTR_DAT_04cbb008
                      );
    fVar4 = _UNK_00e20170;
    if ((uVar2 & 1) == 0) {
      iVar1 = 0;
    }
    else {
      fVar3 = fStack_34 / *(float *)(param_1 + 0x108);
      if (cRam0000000004f9ba93 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa200);
        cRam0000000004f9ba93 = '\x01';
      }
      fVar4 = fVar3 * 60.0 * fVar4;
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar1 = -0x7ffffffa;
      if ((float)(int)fVar4 != INFINITY) {
        iVar1 = (int)fVar4 + 6;
      }
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

