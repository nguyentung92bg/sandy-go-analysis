/* IL2CPP: Dino.BusSand.App.UI.SystemOpenPanel$$OnClose
void Dino_BusSand_App_UI_SystemOpenPanel__OnClose (Dino_BusSand_App_UI_SystemOpenPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.SystemOpenPanel$$OnClose
   void Dino_BusSand_App_UI_SystemOpenPanel__OnClose (Dino_BusSand_App_UI_SystemOpenPanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_SystemOpenPanel__OnClose_21e77b0
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  
  if ((bRam0000000004f9bbd7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bbd7 = 1;
  }
  if (*(long *)(param_4 + 0x38) != 0) {
    uVar4 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x18);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar1 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    if ((uVar1 & 1) != 0) {
      if (((*(long *)(param_4 + 0x38) != 0) &&
          (lVar2 = *(long *)(*(long *)(param_4 + 0x38) + 0x18), lVar2 != 0)) &&
         (lVar2 = UnityEngine_GameObject__get_transform_43c1048(lVar2,0), lVar2 != 0)) {
        fVar5 = (float)UnityEngine_Transform__get_localScale_43d1b0c(lVar2,0);
        if (cRam0000000004f9b65d == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65d = '\x01';
        }
        pfVar3 = *(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
        if (_UNK_00e1fea0 <=
            (param_3 - pfVar3[2]) * (param_3 - pfVar3[2]) +
            (fVar5 - *pfVar3) * (fVar5 - *pfVar3) + (param_2 - pfVar3[1]) * (param_2 - pfVar3[1])) {
          return;
        }
        if ((*(long *)(param_4 + 0x38) != 0) &&
           (lVar2 = *(long *)(*(long *)(param_4 + 0x38) + 0x18), lVar2 != 0)) {
          lVar2 = UnityEngine_GameObject__get_transform_43c1048(lVar2,0);
          if (cRam0000000004f9b65e == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65e = '\x01';
          }
          if (lVar2 != 0) {
            if ((bRam0000000004fa8b3e & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cf7a00,0);
              bRam0000000004fa8b3e = 1;
            }
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar2 = *(long *)(lVar2 + 0x10);
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
            }
            if (pcRam0000000004fa8bf0 == (code *)0x0) {
              pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
            }
            (*pcRam0000000004fa8bf0)(lVar2,&stack0xffffffffffffffd4);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

