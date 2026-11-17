/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier.<>c__DisplayClass123_0$$<Glow>b__2
void Dino_BusSand_App_UI_HomeAtelier___c__DisplayClass123_0___Glow_b__2 (Dino_BusSand_App_UI_HomeAtelier___c__DisplayClass123_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier.<>c__DisplayClass123_0$$<Glow>b__2
   void Dino_BusSand_App_UI_HomeAtelier___c__DisplayClass123_0___Glow_b__2
   (Dino_BusSand_App_UI_HomeAtelier___c__DisplayClass123_0_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_HomeAtelier___c__DisplayClass123_0___Glow_b__2_22db3cc
               (float param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  float fVar6;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c3ec & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c3ec = 1;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  plVar5 = *(long **)(param_2 + 0x20);
  if (plVar5 != (long *)0x0) {
    fVar6 = (float)func_0x049b5320(param_1 * _UNK_00e2082c);
    (**(code **)(*plVar5 + 0x2a8))
              (0x3f800000,_UNK_00e20a20,_UNK_00e208e8,fVar6 * _UNK_00e208e8,plVar5,
               *(undefined8 *)(*plVar5 + 0x2b0));
    if (*(long *)(param_2 + 0x20) != 0) {
      lVar3 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(*(long *)(param_2 + 0x20),0);
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
      if (lVar3 != 0) {
        if ((bRam0000000004fa8b3e & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7a00,0);
          bRam0000000004fa8b3e = 1;
        }
        if (lVar3 != 0) {
          lVar3 = *(long *)(lVar3 + 0x10);
          if (lVar3 != 0) {
            if (pcRam0000000004fa8bf0 == (code *)0x0) {
              pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
            }
            (*pcRam0000000004fa8bf0)(lVar3,&stack0xffffffffffffffd4);
            return;
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

