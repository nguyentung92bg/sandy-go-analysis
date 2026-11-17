/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier.<>c__DisplayClass123_0$$<Glow>b__1
void Dino_BusSand_App_UI_HomeAtelier___c__DisplayClass123_0___Glow_b__1 (Dino_BusSand_App_UI_HomeAtelier___c__DisplayClass123_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier.<>c__DisplayClass123_0$$<Glow>b__1
   void Dino_BusSand_App_UI_HomeAtelier___c__DisplayClass123_0___Glow_b__1
   (Dino_BusSand_App_UI_HomeAtelier___c__DisplayClass123_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeAtelier___c__DisplayClass123_0___Glow_b__1_22db2fc(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c3eb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c3eb = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x18) + 0xd4) != '\0') {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    if (lVar4 != 0) {
      lVar3 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
      uStack_2c = *(undefined4 *)(lVar3 + 0xc);
      uStack_28 = *(undefined4 *)(lVar3 + 0x10);
      uStack_24 = *(undefined4 *)(lVar3 + 0x14);
      if ((bRam0000000004fa8b3e & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7a00,0);
        bRam0000000004fa8b3e = 1;
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
      }
      if (pcRam0000000004fa8bf0 == (code *)0x0) {
        pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
      }
      (*pcRam0000000004fa8bf0)(lVar4,&uStack_2c);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

