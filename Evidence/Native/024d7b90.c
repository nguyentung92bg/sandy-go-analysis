/* IL2CPP: Dino.BusSand.View.PackVehicle$$Apply
void Dino_BusSand_View_PackVehicle__Apply (Dino_BusSand_View_PackVehicle_o* __this, float intro, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PackVehicle$$Apply
   void Dino_BusSand_View_PackVehicle__Apply (Dino_BusSand_View_PackVehicle_o* __this, float intro,
   const MethodInfo* method); */

void Dino_BusSand_View_PackVehicle__Apply_23d7b90(float param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((bRam0000000004f9ca31 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ca31 = 1;
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    fVar5 = *(float *)(param_2 + 100);
    fVar7 = _UNK_00e2098c;
    if (fVar5 <= _UNK_00e2098c) {
      fVar7 = fVar5;
    }
    fVar6 = _UNK_00e20864;
    if (_UNK_00e20864 <= fVar5) {
      fVar6 = fVar7;
    }
    param_1 = *(float *)(param_2 + 0x60) * *(float *)(param_2 + 0x74) * param_1;
    UnityEngine_Transform__set_localScale_43d1be0
              (param_1 * (fVar6 * 0.5 + 1.0),param_1 * (1.0 - fVar6),
               param_1 * (fVar6 * _UNK_00e207cc + 1.0),*(long *)(param_2 + 0x28),0);
    if (*(long *)(param_2 + 0x28) != 0) {
      UnityEngine_Transform__set_localPosition_43cfda8
                (*(float *)(param_2 + 0x90) + 0.0,
                 *(float *)(param_2 + 0x6c) + *(float *)(param_2 + 0x94),
                 *(float *)(param_2 + 0x98) + 0.0,*(long *)(param_2 + 0x28),0);
      puVar1 = PTR_DAT_04ca9ae8;
      if (*(long *)(param_2 + 0x28) != 0) {
        UnityEngine_Transform__set_localRotation_43d156c
                  (*(undefined4 *)(param_2 + 0x80),*(undefined4 *)(param_2 + 0x84),
                   *(undefined4 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x8c),
                   *(long *)(param_2 + 0x28),0);
        uVar3 = *(undefined8 *)(param_2 + 0x48);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar4 = *(long *)(param_2 + 0x48);
        if (cRam0000000004f9b65e == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65e = '\x01';
        }
        if (lVar4 != 0) {
          if ((bRam0000000004fa8b3e & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7a00,0);
            bRam0000000004fa8b3e = 1;
          }
          if (lVar4 != 0) {
            lVar4 = *(long *)(lVar4 + 0x10);
            if (lVar4 != 0) {
              if (pcRam0000000004fa8bf0 == (code *)0x0) {
                pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
              }
              (*pcRam0000000004fa8bf0)(lVar4,&stack0xffffffffffffffd4);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

