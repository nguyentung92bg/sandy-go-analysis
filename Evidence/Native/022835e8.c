/* IL2CPP: Dino.BusSand.App.UI.KitValues$$SameAs
bool Dino_BusSand_App_UI_KitValues__SameAs (Dino_BusSand_App_UI_KitValues_o* __this, Dino_BusSand_App_UI_KitValues_o* o, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitValues$$SameAs
   bool Dino_BusSand_App_UI_KitValues__SameAs (Dino_BusSand_App_UI_KitValues_o* __this,
   Dino_BusSand_App_UI_KitValues_o* o, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_KitValues__SameAs_21835e8(long param_1,long param_2)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  if ((bRam0000000004f9b93f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad7b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b93f = 1;
  }
  puVar3 = PTR_DAT_04cad7b8;
  fVar1 = _UNK_00e1fea0;
  if ((((param_2 != 0) &&
       (fVar7 = (float)*(undefined8 *)(param_1 + 0x10) - (float)*(undefined8 *)(param_2 + 0x10),
       fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) -
               (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20),
       fVar7 * fVar7 + fVar8 * fVar8 < _UNK_00e1fea0)) &&
      (fVar7 = (float)*(undefined8 *)(param_1 + 0x18) - (float)*(undefined8 *)(param_2 + 0x18),
      fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) -
              (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20),
      fVar7 * fVar7 + fVar8 * fVar8 < _UNK_00e1fea0)) &&
     (fVar7 = (float)*(undefined8 *)(param_1 + 0x20) - (float)*(undefined8 *)(param_2 + 0x20),
     fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) -
             (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20),
     fVar7 * fVar7 + fVar8 * fVar8 < _UNK_00e1fea0)) {
    uVar11 = *(undefined4 *)(param_1 + 0x28);
    uVar12 = *(undefined4 *)(param_1 + 0x2c);
    uVar13 = *(undefined4 *)(param_2 + 0x28);
    uVar14 = *(undefined4 *)(param_2 + 0x2c);
    if (*(int *)(*(long *)PTR_DAT_04cad7b8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_App_UI_KitAdopt__Near_227cfe4(uVar11,uVar12,uVar13,uVar14,0);
    if ((uVar4 & 1) != 0) {
      uVar11 = *(undefined4 *)(param_1 + 0x30);
      uVar12 = *(undefined4 *)(param_1 + 0x34);
      uVar13 = *(undefined4 *)(param_2 + 0x30);
      uVar14 = *(undefined4 *)(param_2 + 0x34);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = Dino_BusSand_App_UI_KitAdopt__Near_227cfe4(uVar11,uVar12,uVar13,uVar14,0);
      if ((uVar4 & 1) != 0) {
        uVar11 = *(undefined4 *)(param_1 + 0x38);
        uVar12 = *(undefined4 *)(param_1 + 0x3c);
        uVar14 = *(undefined4 *)(param_2 + 0x38);
        uVar15 = *(undefined4 *)(param_2 + 0x3c);
        uVar13 = *(undefined4 *)(param_1 + 0x40);
        uVar16 = *(undefined4 *)(param_2 + 0x40);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = Dino_BusSand_App_UI_KitAdopt__Near_227d088
                          (uVar11,uVar12,uVar13,uVar14,uVar15,uVar16,0);
        if ((uVar4 & 1) != 0) {
          uVar11 = *(undefined4 *)(param_1 + 0x44);
          uVar12 = *(undefined4 *)(param_2 + 0x44);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar4 = Dino_BusSand_App_UI_KitAdopt__NearAngle_227d158(uVar11,uVar12,0);
          if (((uVar4 & 1) != 0) && (*(char *)(param_1 + 0x48) == *(char *)(param_2 + 0x48))) {
            if ((*(char *)(param_1 + 0x49) != '\0') && (*(char *)(param_2 + 0x49) != '\0')) {
              uVar5 = *(undefined8 *)(param_1 + 0x50);
              uVar6 = *(undefined8 *)(param_2 + 0x50);
                    /* try { // try from 022837b4 to 023837bf has its CatchHandler @ 022837c8 */
              if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022837b4 with catch @ 022837c8
                        */
              uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,uVar6,0);
              if ((uVar4 & 1) != 0) {
                return 0;
              }
              fVar7 = (float)*(undefined8 *)(param_1 + 0x58) -
                      (float)*(undefined8 *)(param_2 + 0x58);
              fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20) -
                      (float)((ulong)*(undefined8 *)(param_2 + 0x58) >> 0x20);
              fVar9 = (float)*(undefined8 *)(param_1 + 0x60) -
                      (float)*(undefined8 *)(param_2 + 0x60);
              fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20) -
                       (float)((ulong)*(undefined8 *)(param_2 + 0x60) >> 0x20);
              if (fVar1 <= fVar10 * fVar10 + fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8) {
                return 0;
              }
              if (*(int *)(param_1 + 0x68) != *(int *)(param_2 + 0x68)) {
                return 0;
              }
              uVar11 = *(undefined4 *)(param_1 + 0x6c);
              uVar12 = *(undefined4 *)(param_2 + 0x6c);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar4 = Dino_BusSand_App_UI_KitAdopt__Near_227cfcc(uVar11,uVar12,0);
              if ((uVar4 & 1) == 0) {
                return 0;
              }
              if (*(char *)(param_1 + 0x70) != *(char *)(param_2 + 0x70)) {
                return 0;
              }
              if (*(char *)(param_1 + 0x71) != *(char *)(param_2 + 0x71)) {
                return 0;
              }
            }
            puVar2 = PTR_DAT_04ca9ae8;
            if ((*(char *)(param_1 + 0x72) == '\0') || (*(char *)(param_2 + 0x72) == '\0')) {
              return 1;
            }
            uVar5 = *(undefined8 *)(param_1 + 0x78);
            uVar6 = *(undefined8 *)(param_2 + 0x78);
            if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,uVar6,0);
            if ((uVar4 & 1) == 0) {
              uVar5 = *(undefined8 *)(param_1 + 0x80);
              uVar6 = *(undefined8 *)(param_2 + 0x80);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,uVar6,0);
              if ((uVar4 & 1) == 0) {
                if (*(char *)(param_1 + 0x9c) == '\0') {
                  uVar11 = *(undefined4 *)(param_1 + 0x88);
                  uVar12 = *(undefined4 *)(param_2 + 0x88);
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar4 = Dino_BusSand_App_UI_KitAdopt__Near_227cfcc(uVar11,uVar12,0);
                  if ((uVar4 & 1) == 0) {
                    return 0;
                  }
                }
                uVar11 = *(undefined4 *)(param_1 + 0x8c);
                uVar12 = *(undefined4 *)(param_2 + 0x8c);
                    /* try { // try from 02283910 to 023839a7 has its CatchHandler @ 02283910
                       catch() { ... } // from try @ 02283910 with catch @ 02283910
                       catch() { ... } // from try @ 022839ac with catch @ 02283910 */
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar4 = Dino_BusSand_App_UI_KitAdopt__Near_227cfcc(uVar11,uVar12,0);
                if ((uVar4 & 1) != 0) {
                  uVar11 = *(undefined4 *)(param_1 + 0x90);
                  uVar12 = *(undefined4 *)(param_2 + 0x90);
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar4 = Dino_BusSand_App_UI_KitAdopt__Near_227cfcc(uVar11,uVar12,0);
                    /* try { // try from 022839a8 to 023839ab has its CatchHandler @ 022839fc */
                    /* try { // try from 022839ac to 02383a17 has its CatchHandler @ 02283910 */
                  if (((((uVar4 & 1) != 0) &&
                       (*(char *)(param_1 + 0x9c) == *(char *)(param_2 + 0x9c))) &&
                      (fVar7 = (float)*(undefined8 *)(param_1 + 0xa0) -
                               (float)*(undefined8 *)(param_2 + 0xa0),
                      fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0xa0) >> 0x20) -
                              (float)((ulong)*(undefined8 *)(param_2 + 0xa0) >> 0x20),
                      fVar9 = (float)*(undefined8 *)(param_1 + 0xa8) -
                              (float)*(undefined8 *)(param_2 + 0xa8),
                      fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20) -
                               (float)((ulong)*(undefined8 *)(param_2 + 0xa8) >> 0x20),
                      fVar10 * fVar10 + fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8 < fVar1)) &&
                     (*(int *)(param_1 + 0xb0) == *(int *)(param_2 + 0xb0))) {
                    uVar11 = *(undefined4 *)(param_1 + 0x94);
                    uVar12 = *(undefined4 *)(param_2 + 0x94);
                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar4 = Dino_BusSand_App_UI_KitAdopt__Near_227cfcc(uVar11,uVar12,0);
                    if ((uVar4 & 1) != 0) {
                      uVar11 = *(undefined4 *)(param_1 + 0x98);
                      uVar12 = *(undefined4 *)(param_2 + 0x98);
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                    /* catch() { ... } // from try @ 022839a8 with catch @ 022839fc */
                      uVar4 = Dino_BusSand_App_UI_KitAdopt__Near_227cfcc(uVar11,uVar12,0);
                      if ((((uVar4 & 1) != 0) &&
                          (*(int *)(param_1 + 0xb4) == *(int *)(param_2 + 0xb4))) &&
                         ((*(int *)(param_1 + 0xb8) == *(int *)(param_2 + 0xb8) &&
                          (*(int *)(param_1 + 0xbc) == *(int *)(param_2 + 0xbc))))) {
                        return 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

