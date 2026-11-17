/* IL2CPP: Dino.BusSand.App.Meta.Journey.LevelJourney$$Begin
void Dino_BusSand_App_Meta_Journey_LevelJourney__Begin (Dino_BusSand_App_Meta_Journey_LevelJourney_o* __this, Dino_BusSand_App_Meta_Journey_LevelJourney_Header_o* h, int64_t nowMs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.LevelJourney$$Begin
   void Dino_BusSand_App_Meta_Journey_LevelJourney__Begin
   (Dino_BusSand_App_Meta_Journey_LevelJourney_o* __this,
   Dino_BusSand_App_Meta_Journey_LevelJourney_Header_o* h, int64_t nowMs, const MethodInfo* method);
    */

void Dino_BusSand_App_Meta_Journey_LevelJourney__Begin_2299a04
               (long param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined4 uVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  undefined1 auVar26 [16];
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0x18) = 0;
    iVar1 = param_2[0xd];
    *(undefined1 *)(lVar8 + 0x24) = 0;
    *(undefined4 *)(lVar8 + 0x20) = 0x880;
    uVar9 = param_2[6];
    iVar4 = -(uint)((char)uVar9 == '\0');
    iVar5 = -(uint)((char)((uint)uVar9 >> 8) == '\0');
    iVar6 = -(uint)((char)((uint)uVar9 >> 0x10) == '\0');
    iVar7 = -(uint)((char)((uint)uVar9 >> 0x18) == '\0');
    bVar10 = UNK_00e6b3e0 & ~(byte)iVar4;
    bVar11 = UNK_00e6b3e1 & ~(byte)((uint)iVar4 >> 8);
    bVar12 = UNK_00e6b3e2 & ~(byte)((uint)iVar4 >> 0x10);
    bVar13 = UNK_00e6b3e3 & ~(byte)((uint)iVar4 >> 0x18);
    bVar14 = UNK_00e6b3e4 & ~(byte)iVar5;
    bVar15 = UNK_00e6b3e5 & ~(byte)((uint)iVar5 >> 8);
    bVar16 = UNK_00e6b3e6 & ~(byte)((uint)iVar5 >> 0x10);
    bVar17 = UNK_00e6b3e7 & ~(byte)((uint)iVar5 >> 0x18);
    bVar18 = UNK_00e6b3e8 & ~(byte)iVar6;
    bVar19 = UNK_00e6b3e9 & ~(byte)((uint)iVar6 >> 8);
    bVar20 = UNK_00e6b3ea & ~(byte)((uint)iVar6 >> 0x10);
    bVar21 = UNK_00e6b3eb & ~(byte)((uint)iVar6 >> 0x18);
    bVar22 = UNK_00e6b3ec & ~(byte)iVar7;
    bVar23 = UNK_00e6b3ed & ~(byte)((uint)iVar7 >> 8);
    bVar24 = UNK_00e6b3ee & ~(byte)((uint)iVar7 >> 0x10);
    bVar25 = UNK_00e6b3ef & ~(byte)((uint)iVar7 >> 0x18);
    auVar26[1] = bVar11;
    auVar26[0] = bVar10;
    auVar26[2] = bVar12;
    auVar26[3] = bVar13;
    auVar26[4] = bVar14;
    auVar26[5] = bVar15;
    auVar26[6] = bVar16;
    auVar26[7] = bVar17;
    auVar26[8] = bVar18;
    auVar26[9] = bVar19;
    auVar26[10] = bVar20;
    auVar26[0xb] = bVar21;
    auVar26[0xc] = bVar22;
    auVar26[0xd] = bVar23;
    auVar26[0xe] = bVar24;
    auVar26[0xf] = bVar25;
    auVar3[1] = bVar11;
    auVar3[0] = bVar10;
    auVar3[2] = bVar12;
    auVar3[3] = bVar13;
    auVar3[4] = bVar14;
    auVar3[5] = bVar15;
    auVar3[6] = bVar16;
    auVar3[7] = bVar17;
    auVar3[8] = bVar18;
    auVar3[9] = bVar19;
    auVar3[10] = bVar20;
    auVar3[0xb] = bVar21;
    auVar3[0xc] = bVar22;
    auVar3[0xd] = bVar23;
    auVar3[0xe] = bVar24;
    auVar3[0xf] = bVar25;
    auVar26 = NEON_ext(auVar26,auVar3,8,1);
    uVar2 = CONCAT13(bVar13 | auVar26[3],
                     CONCAT12(bVar12 | auVar26[2],CONCAT11(bVar11 | auVar26[1],bVar10 | auVar26[0]))
                    );
    uVar9 = 0x11;
    if (0 < iVar1) {
      uVar9 = 0x12;
    }
    *(uint *)(param_1 + 0x30) =
         uVar2 | (uint)(CONCAT17(bVar17 | auVar26[7],
                                 CONCAT16(bVar16 | auVar26[6],
                                          CONCAT15(bVar15 | auVar26[5],
                                                   CONCAT14(bVar14 | auVar26[4],uVar2)))) >> 0x20);
    Dino_BusSand_App_Meta_Journey_JourneyBytes__U8_229560c(lVar8,uVar9);
    if (*(long *)(param_1 + 0x10) != 0) {
      Dino_BusSand_App_Meta_Journey_JourneyBytes__U8_229560c
                (*(long *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x30));
      if (*(long *)(param_1 + 0x10) != 0) {
        Dino_BusSand_App_Meta_Journey_JourneyBytes__U32_2295778(*(long *)(param_1 + 0x10),*param_2);
        if (*(long *)(param_1 + 0x10) != 0) {
          Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
                    (*(long *)(param_1 + 0x10),param_2[1] & ((int)param_2[1] >> 0x1f ^ 0xffffffffU))
          ;
          if (*(long *)(param_1 + 0x10) != 0) {
            Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
                      (*(long *)(param_1 + 0x10),
                       param_2[2] & ((int)param_2[2] >> 0x1f ^ 0xffffffffU));
            if (*(long *)(param_1 + 0x10) != 0) {
              Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
                        (*(long *)(param_1 + 0x10),
                         param_2[3] & ((int)param_2[3] >> 0x1f ^ 0xffffffffU));
              if (*(long *)(param_1 + 0x10) != 0) {
                Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
                          (*(long *)(param_1 + 0x10),
                           param_2[4] & ((int)param_2[4] >> 0x1f ^ 0xffffffffU));
                if (*(long *)(param_1 + 0x10) != 0) {
                  Dino_BusSand_App_Meta_Journey_JourneyBytes__U32_2295778
                            (*(long *)(param_1 + 0x10),param_2[5]);
                  if (*(long *)(param_1 + 0x10) != 0) {
                    Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
                              (*(long *)(param_1 + 0x10),
                               param_2[7] & ((int)param_2[7] >> 0x1f ^ 0xffffffffU));
                    if (*(long *)(param_1 + 0x10) != 0) {
                      Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
                                (*(long *)(param_1 + 0x10),
                                 param_2[8] & ((int)param_2[8] >> 0x1f ^ 0xffffffffU));
                      if (*(long *)(param_1 + 0x10) != 0) {
                        Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
                                  (*(long *)(param_1 + 0x10),
                                   param_2[9] & ((int)param_2[9] >> 0x1f ^ 0xffffffffU));
                        if (*(long *)(param_1 + 0x10) != 0) {
                          Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
                                    (*(long *)(param_1 + 0x10),
                                     param_2[10] & ((int)param_2[10] >> 0x1f ^ 0xffffffffU));
                          if (*(long *)(param_1 + 0x10) != 0) {
                            Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
                                      (*(long *)(param_1 + 0x10),
                                       param_2[0xb] & ((int)param_2[0xb] >> 0x1f ^ 0xffffffffU));
                            if (*(long *)(param_1 + 0x10) != 0) {
                              Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
                                        (*(long *)(param_1 + 0x10),
                                         param_2[0xc] & ((int)param_2[0xc] >> 0x1f ^ 0xffffffffU));
                              if (iVar1 < 1) {
LAB_02399ba4:
                                *(undefined8 *)(param_1 + 0x18) = 0;
                                *(undefined8 *)(param_1 + 0x20) = 0;
                                *(undefined8 *)(param_1 + 0x28) = param_3;
                                *(undefined4 *)(param_1 + 0x4c) = 0;
                                *(undefined2 *)(param_1 + 0x48) = 1;
                                return;
                              }
                              if (*(long *)(param_1 + 0x10) != 0) {
                                Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
                                          (*(long *)(param_1 + 0x10),
                                           param_2[0xd] & ((int)param_2[0xd] >> 0x1f ^ 0xffffffffU))
                                ;
                                if (*(long *)(param_1 + 0x10) != 0) {
                                  Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
                                            (*(long *)(param_1 + 0x10),
                                             param_2[0xe] &
                                             ((int)param_2[0xe] >> 0x1f ^ 0xffffffffU));
                                  goto LAB_02399ba4;
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
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

